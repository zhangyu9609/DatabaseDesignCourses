#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char LReader_num[20];

/**********函数声明**********/
int CONNECT();
int DISCONNECT();
void start_meun();   //初始界面
void login_meun();   //登录界面函数
int login (void);    //用户登录函数
void admin_menu();   //管理员功能界面函数
void reader_meun();  //读者功能界面函数
void admin();        //管理员函数
void reader();       //读者函数
void admin_reader(); //管理读者函数
void admin_book();   //管理图书函数
void allborrow();    //查看借阅情况函数
void overdue();      //超期罚款函数
void adminreader_menu();
void adminbook_menu();
void addreader();    //增加读者函数
void deletereader(); //删除读者函数
void updatereader(); //修改读者函数
void addbook();      //增加图书函数
void deletebook();   //删除图书函数
void updatebook();   //修改图书函数
void borrowbook();   //借书函数
void returnbook();   //还书函数
void searchpersonborrow();//查看个人借阅函数
void updateme();     //修改个人信息函数
void allbook();      //查看所有图书函数
void allreader();    //查看所有读者函数


