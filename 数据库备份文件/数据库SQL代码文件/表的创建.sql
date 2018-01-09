--创建数据库
CREATE DATABASE Library_342

ON PRIMARY
  ( NAME = Library_342,
    FILENAME = 'F:\DB\Library_342.mdf',
    SIZE = 3MB,
    MAXSIZE = UNLIMITED ),
  ( NAME = Library_342_data1,
    FILENAME = 'F:\DB\Library_342_data1.ndf',
    SIZE = 5MB,
    MAXSIZE = 10MB,
    FILEGROWTH = 1MB  )
LOG ON
  ( NAME = Library_342_log,
    FILENAME = 'F:\DB\Library_342_log.ldf',
    SIZE = 2MB,
    MAXSIZE = 6MB,
    FILEGROWTH = 10% )

go
use Library_342
--创建读者表
CREATE TABLE Reader (
  Reader_id    CHAR(7)  PRIMARY KEY,
  Reader_password  CHAR(8) NOT NULL,
  Reader_name  NCHAR(5) NOT NULL,
  Reader_sex   NCHAR(1) DEFAULT '男', 
  Reader_age   TINYINT,
  Reader_Company   NVARCHAR(20),
  Reader_work  NVARCHAR(20)
  )
--创建图书表
CREATE TABLE Book (
  Book_id      CHAR(6) 	  PRIMARY KEY,
  Book_name    NVARCHAR(20) NOT NULL,
  Book_writer  NCHAR(5),
  Book_publisher  NVARCHAR(20),
  Book_price   SMALLINT,
  Book_introduction    NVARCHAR(100),
  Book_type    NVARCHAR(20) NOT NULL,
  Book_num int not null,
  Book_allnum int not null
  )
--创建借阅表
CREATE TABLE Borrow (
  Reader_id    CHAR(7)  NOT NULL,
  Book_id    CHAR(6)  NOT NULL,
  Borrow_time  DATE NOT NULL,
  PRIMARY KEY (Reader_id, Book_id),--参照完整性约束
  FOREIGN KEY (Reader_id) REFERENCES Reader(Reader_id),--参照完整性约束
  FOREIGN KEY (Book_id) REFERENCES Book(Book_id)--参照完整性约束
  )
 --创建借阅历史表
CREATE TABLE History (
  Reader_id    CHAR(7)  NOT NULL,
  Book_id    CHAR(6)  NOT NULL,
  Borrow_time  DATE NOT NULL,
  Return_time  DATE ,
  PRIMARY KEY (Reader_id, Book_id,Borrow_time),--参照完整性约束
  FOREIGN KEY (Reader_id) REFERENCES Reader(Reader_id),--参照完整性约束
  FOREIGN KEY (Book_id) REFERENCES Book(Book_id)--参照完整性约束
  )
--创建管理员表
CREATE TABLE Admin (
  Admin_id    CHAR(7)  PRIMARY KEY,
  Admin_password  CHAR(8) NOT NULL,
  Admin_name  NCHAR(5) NOT NULL,
  )
--创建采购员表
CREATE TABLE Shopper (
  Shopper_id    CHAR(7)  PRIMARY KEY,
  Shopper_name  NCHAR(5) NOT NULL,
  Shopper_sex   NCHAR(1) DEFAULT '男', 
  Shopper_age   TINYINT NOT NULL
  )
--创建采购信息表
CREATE TABLE Shop (
  Shopper_id    CHAR(7) NOT NULL,
  Book_id      CHAR(6) NOT NULL,  
  Shop_time  DATE,
  PRIMARY KEY (Shopper_id, Book_id),--参照完整性约束
  FOREIGN KEY (Shopper_id) REFERENCES Shopper(Shopper_id),--参照完整性约束
  FOREIGN KEY (Book_id) REFERENCES Book(Book_id)--参照完整性约束
  )

