


--创建超期罚款信息视图
CREATE VIEW view_overdue(Reader_id,Reader_name,Book_name,Borrow_time,"超期（天）","罚款(元)")
AS
SELECT Reader.Reader_id,Reader.Reader_name,Book.Book_name,Borrow.Borrow_time,
	   DATEDIFF(DAY,Borrow.Borrow_time,CONVERT (date,GETDATE(),112))-30 ,
      (DATEDIFF(DAY,Borrow.Borrow_time,CONVERT (date,GETDATE(),112))-30)*0.05 
FROM Reader,Book,Borrow
WHERE Borrow.Book_id=Book.Book_id AND
      Reader.Reader_id=Borrow.Reader_id AND
      DATEDIFF(DAY,Borrow.Borrow_time,CONVERT (date,GETDATE(),112))>30    
      
--创建图书借阅数量视图
CREATE VIEW view_hotbook(Book_id,Book_name,"当前借阅数量","被借阅总次数")
AS
SELECT Book.Book_id,Book.Book_name,Book.Book_allnum-Book.Book_num,Book_allnum-Book.Book_num+COUNT(History.Book_id)
FROM Book,History
WHERE History.Book_id=Book.Book_id
GROUP BY Book.Book_id,Book_name,Book.Book_allnum-Book.Book_num

      
      
--在图书表上创建关于“图书类型”列的一个升序非聚集索引； 
CREATE INDEX BookType ON Book(Book_type);


--定义权限
CREATE LOGIN login2 with password='abcd1234', default_database=Library_342
CREATE USER user2 FOR LOGIN login2 with default_schema=dbo
GRANT INSERT,SELECT,UPDATE,DELETE
ON Borrow
TO user2

 
 --创建TR_Book_update_Booknum_allnum触发器，当修改图书信息时,库存与数量的关系需对应     
CREATE TRIGGER TR_Book_update_Booknum_allnum
ON Book AFTER update
ASIF (SELECT inserted.Book_allnum-inserted.Book_num-count(Borrow.Book_id)FROM Borrow,insertedWHERE Borrow.Book_id=inserted.Book_idGROUP BY Book_allnum,Book_num)!=0BEGIN      PRINT '图书库存和总数量不对应! '	     ROLLBACKEND

--创建TR_Book_Delete_Borrow_History_Shop触发器，当删除图书时,将该图书的借阅信息删除       
CREATE TRIGGER TR_Book_Delete_Borrow_History_Shop
ON Book INSTEAD OF delete
ASBEGIN      DELETE     FROM Borrow     WHERE Borrow.Book_id in (     		SELECT Book_id     		FROM deleted)	 PRINT '该图书的借阅信息已删除! '     DELETE     FROM History     WHERE History.Book_id in (     		SELECT Book_id     		FROM deleted)	 PRINT '该图书的被借阅历史已删除! '     DELETE     FROM Shop     WHERE Shop.Book_id in (     		SELECT Book_id     		FROM deleted)	 PRINT '该图书的采购信息已删除! '	 	 	 DELETE     FROM Book     WHERE Book_id in(     		SELECT Book_id     		FROM deleted)    PRINT '该图书已删除! '	 END


       
--创建TR_Borrow_insert_8_Booknum_exits触发器，每次最多能借8本书,判断图书库存,判断是否已借该书，并对图书库存进行更新
CREATE TRIGGER TR_Borrow_insert_8_Booknum_exits
ON Borrow AFTER insert
AS
IF (SELECT COUNT(Borrow.Reader_id) FROM Borrow,inserted
WHERE Borrow.Reader_id=inserted.Reader_id)>8
BEGIN      PRINT '最多只能借8本书! '	     ROLLBACKEND
else IF (SELECT Book.Book_num FROM Book,inserted
WHERE Book.Book_id=inserted.Book_id)=0
BEGIN      PRINT '该图书库存不足! '	     ROLLBACKENDelseBEGIN      UPDATE Book     SET Book_num=Book_num-1     WHERE Book_id in (		SELECT Book_id		FROM inserted)	 PRINT '图书库存已更新! 'END--创建TR_Borrow_Delete_Booknum触发器，当删除借阅记录时,对图书库存进行更新并将借阅记录记录到借阅历史表中     
CREATE TRIGGER TR_Borrow_Delete_Booknum
ON Borrow AFTER delete
ASBEGIN      UPDATE Book     SET Book_num=Book_num+1     WHERE Book_id in (		SELECT Book_id		FROM deleted)	PRINT '图书库存已更新! '	INSERT 	INTO History(Reader_id,Book_id,Borrow_time)	SELECT deleted.Reader_id,deleted.Book_id,deleted.Borrow_time	FROM deletedEND--创建TR_History_insert_Return_time触发器，当还书时还书时间不能比借书时间早       
CREATE TRIGGER TR_History_insert_Return_time
ON History AFTER INSERT
ASIF (SELECT DATEDIFF(DAY,inserted.Return_time,inserted.Borrow_time) FROM inserted,HistoryWHERE History.Book_id=inserted.Book_id AND History.Reader_id=inserted.Reader_id) >0BEGIN      PRINT '归还日期不能比借书日期早! '	     ROLLBACKEND--创建TR_Reader_Delete_Borrow触发器，当删除读者时,将该读者的借阅信息删除       
CREATE TRIGGER TR_Reader_Delete_Borrow
ON Reader  INSTEAD OF  delete
ASBEGIN      DELETE     FROM Borrow     WHERE Borrow.Reader_id in(     		SELECT Reader_id     		FROM deleted)	PRINT '该读者的借阅信息已删除! '	DELETE     FROM History     WHERE History.Reader_id in(     		SELECT Reader_id     		FROM deleted)	PRINT '该读者的借阅历史已删除! '	DELETE    FROM Reader    WHERE Reader_id in(     		SELECT Reader_id     		FROM deleted)    PRINT '该读者已删除! 'END



--创建TR_Shopper_Delete_Shop触发器，当删除采购员时,将该采购员的采购信息删除       
CREATE TRIGGER TR_Shopper_Delete_Shop
ON Shopper INSTEAD OF delete
ASBEGIN 
     DELETE     FROM Shop     WHERE Shop.shopper_id in (     		SELECT shopper_id     		FROM deleted)	 PRINT '该采购员的采购信息已删除! '	 	 	 DELETE     FROM Shopper     WHERE shopper_id in(     		SELECT shopper_id     		FROM deleted)    PRINT '该采购员已删除! '	 END



--存储过程查询某类图书的数量
CREATE  PROCEDURE  Book_Type_num
  @Book_type NVARCHAR(20)='自然科学'
AS
 SELECT Book_type, COUNT(Book.Book_id) '该类型的图书数量(一样的书只算一本)'
	FROM Book
    WHERE Book.Book_type = @Book_type 
    GROUP BY Book_type
 
    
EXEC Book_Type_num  '自然科学'


--存储过程在Reader中插入一行数据，其各列数据均通过输入参数获得
CREATE PROC p_InsertReader
  @Reader_id    CHAR(7)  ,
  @Reader_password  CHAR(8),
  @Reader_name  NCHAR(5) ,
  @Reader_sex   NCHAR(1) , 
  @Reader_age   TINYINT,
  @Reader_Company   NVARCHAR(20),
  @Reader_work  NVARCHAR(20)
AS
 INSERT INTO Reader  
   VALUES(@Reader_id,@Reader_password,@Reader_name,@Reader_sex,@Reader_age,@Reader_Company,@Reader_work)
  
   
exec p_InsertReader 'R061101','123456','李勇','男',21,'广东财经大学','学生'


--创建对视图view_hotbook进行排序的存储过程
CREATE  PROCEDURE  HOT_BOOK_SORTING
AS
SELECT *
FROM view_hotbook
order by "被借阅总次数" DESC


EXEC HOT_BOOK_SORTING


CREATE  PROCEDURE  BOOK_type_select
AS
DECLARE @Book_id CHAR(8),@Book_name CHAR(15),@Book_writer  CHAR(8),@Book_publisher  CHAR(18),@Book_price char(6),
@Book_introduction CHAR(15),@Book_type CHAR(20),@Book_num char(6),@Book_allnum char(6)
DECLARE C1 CURSOR FOR SELECT DISTINCT Book_type FROM Book 
where Book_type in(select Book_type from Book)
OPEN C1
FETCH NEXT FROM C1 INTO @Book_type
WHILE @@FETCH_STATUS = 0
BEGIN
  PRINT @Book_type 
  PRINT 'Book_id Book_name Book_writer Book_publisher Book_price Book_intro.. Book_num Book_allnum'
  DECLARE C2 CURSOR FOR
  SELECT Book_id,Book_name,Book_writer,Book_publisher,Book_price,Book_introduction,Book_num,Book_allnum FROM Book 
  where Book_type = @Book_type 
OPEN C2
  FETCH NEXT FROM C2 INTO @Book_id,@Book_name,@Book_writer,@Book_publisher,@Book_price,@Book_introduction,@Book_num,@Book_allnum
  WHILE @@FETCH_STATUS = 0
  BEGIN
    PRINT @Book_id + @Book_name + @Book_writer + @Book_publisher + @Book_price + @Book_introduction + @Book_num + @Book_allnum
    FETCH NEXT FROM C2 INTO @Book_id,@Book_name,@Book_writer,@Book_publisher,@Book_price,@Book_introduction,@Book_num,@Book_allnum
  END
  CLOSE C2
  DEALLOCATE C2
  PRINT ''
  FETCH NEXT FROM C1 INTO @Book_type
END
CLOSE C1
DEALLOCATE C1


EXEC BOOK_type_select

--存储过程查询图书名
CREATE  PROCEDURE  Book_name_select
  @Book_name NVARCHAR(20)='童年'
AS
 SELECT *
	FROM Book
    WHERE Book.Book_name = @Book_name
 
 EXEC Book_name_select
 
 --存储过程查询作者
CREATE  PROCEDURE  Book_writer_select
  @Book_writer NCHAR(5)='舒婷'
AS
 SELECT *
	FROM Book
    WHERE Book.Book_writer = @Book_writer
 
 EXEC Book_writer_select