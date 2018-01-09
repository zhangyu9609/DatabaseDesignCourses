#include"Library.h"

void start_meun()//初始介绍界面
{
	printf(" ============================================================\n");
	printf(" |**********************************************************|\n");
	printf(" |             \1 欢迎使用图书管理系统 \1                     |\n");
	printf(" |**********************************************************|\n");
	printf(" |               制作人：张瑜                               |\n");
	printf(" |               班级：计算机科学与技术三班                 |\n");
	printf(" |               学号：15251102342                          |\n");
	printf(" |               指导老师：马小闳                           |\n");
	printf(" ============================================================\n");
	printf("请按1进入图书管理系统，按0退出系统:");
}

void login_meun()//登录界面函数
{	
	printf(" ============================================================\n");
	printf(" |                                                          |\n");
	printf(" |                   选择用户类型登录系统                   |\n");
	printf(" |                                                          |\n");
	printf(" |                                                          |\n");
	printf(" |     [1].管理员登陆    [2].学生登陆    [0].退出系统       |\n");
	printf(" |                                                          |\n");
	printf(" ============================================================\n");
	printf("请选择：");
}	 

void admin_menu()
{
	printf(" ============================================================\n");
	printf(" |**********************************************************|\n");
	printf(" |                   \1 管理员功能列表  \1                    |\n");
	printf(" |**********************************************************|\n");
	printf(" |                                                          |\n");
	printf(" |                    [1].读者管理                          |\n");
	printf(" |                                                          |\n");
	printf(" |                    [2].图书管理                          |\n");
	printf(" |                                                          |\n");
	printf(" |                    [3].查看当前全部借阅信息              |\n");
	printf(" |                                                          |\n");
	printf(" |                    [4].查看当前读者逾期信息              |\n");
	printf(" |                                                          |\n");
	printf(" |                    [5].返回登录界面重新登陆              |\n");
	printf(" |                                                          |\n");
	printf(" |                    [0].退出系统                          |\n");
	printf(" |                                                          |\n");
	printf(" ============================================================\n");
	printf("请选择：");	
}

void adminreader_menu()
{
	printf(" ============================================================\n");
	printf(" |                                                          |\n");
	printf(" |                    [1].查看全部读者                      |\n");
	printf(" |                                                          |\n");
	printf(" |                    [2].增加读者                          |\n");
	printf(" |                                                          |\n");
	printf(" |                    [3].删除读者                          |\n");
	printf(" |                                                          |\n");
	printf(" |                    [4].修改读者信息                      |\n");
	printf(" |                                                          |\n");
	printf(" |                    [5].返回管理员功能界面                |\n");
	printf(" |                                                          |\n");
	printf(" |                    [0].退出系统                          |\n");
	printf(" |                                                          |\n");
	printf(" ============================================================\n");
	printf("请选择：");	
}

void adminbook_menu()
{
	printf(" ============================================================\n");
	printf(" |                                                          |\n");
	printf(" |                    [1].查看全部图书                      |\n");
	printf(" |                                                          |\n");
	printf(" |                    [2].增加图书                          |\n");
	printf(" |                                                          |\n");
	printf(" |                    [3].删除图书                          |\n");
	printf(" |                                                          |\n");
	printf(" |                    [4].修改图书信息                      |\n");
	printf(" |                                                          |\n");
	printf(" |                    [5].返回管理员功能界面                |\n");
	printf(" |                                                          |\n");
	printf(" |                    [0].退出系统                          |\n");
	printf(" |                                                          |\n");
	printf(" ============================================================\n");
	printf("请选择：");	
}

void reader_meun()
{
    printf(" ============================================================\n");
	printf(" |**********************************************************|\n");
	printf(" |                     \1 读者功能列表  \1                    |\n");
	printf(" |**********************************************************|\n");
	printf(" |                                                          |\n");
	printf(" |                    [1].图书信息查询（借书）              |\n");
	printf(" |                                                          |\n");
	printf(" |                    [2].办理还书手续                      |\n");
	printf(" |                                                          |\n");
	printf(" |                    [3].修改个人信息                      |\n");
	printf(" |                                                          |\n");
	printf(" |                    [4].查看本人借阅信息                  |\n");
	printf(" |                                                          |\n");
	printf(" |                    [5].返回登录界面重新登陆              |\n");
	printf(" |                                                          |\n");
	printf(" |                    [0].退出系统                          |\n");
	printf(" |                                                          |\n");
	printf(" ============================================================\n");
	printf("请选择：");
}



/**********主函数**********/
int main()
{
	int select_num;
	int login_num;
	CONNECT();
	start_meun();
	while(1)
	{
		scanf("%d",&select_num);
		switch(select_num)
		{
		case 1:break;
		case 0://退出系统
			{
				system("cls");
				DISCONNECT();
				printf(" ------------------------------------------------------------\n");
				printf("                   -=  感谢使用，再见！ =-                   \n");
				printf(" ------------------------------------------------------------\n");
				system("pause");
				exit(0);
				
			}
		default:printf("输入错误，请重新输入:");continue;
		}
		break;
	}
	while(1){
		login_meun();//登录界面函数
		login_num=login ();//登录处理
		switch(login_num)
		{
		case 1:admin();break;
		case 2:reader();break;
	}
	}
}
