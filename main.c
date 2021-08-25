#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

/*大致思路：
一、选择读入数据种类
{
   1.学籍信息
   2.一卡通信息
   3.一卡通消费记录
}
读入信息
以文件形式储存

二、读取文件
{
    1新增记录

    2读取-显示某路径下的信息
{
        1.显示全部
        2.查询某个：学号、姓名……-->>link to 3修改 删除
}
    3读取-修改某路径下的信息
{
        1.查找--修改某条记录
        2.查找--删除某条记录
        写回文件
}
    4读取-排序某路径下的学生信息
{
        按照学号、姓名
}

}

三、统计数据
{
  一3-->>1输出最受欢迎图书+对应姓名
         2输出最受欢迎食物+对应姓名
}
*/

void home()
{
    system("cls");
    red
    printf("\n");

    printf("        ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("        ┃                   ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY|BACKGROUND_BLUE|BACKGROUND_GREEN );
    printf("Welcome to School Manager System");white
    red
    printf("                 ┃\n");
    printf("        ┃  1-输入学籍信息                                                    ┃\n");
    printf("        ┃  2-输入一卡通消费记录                                              ┃\n");
    printf("        ┃  3-退出系统                                                        ┃\n");
    printf("        ┃                                                                    ┃\n");
    printf("        ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛         --v1.4\n");
    white
}

void Mainmenu()
{
    system("cls");
    red
    printf("\n");

    printf("        ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("        ┃                   ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY|BACKGROUND_BLUE|BACKGROUND_GREEN );
    printf("Welcome to School Manager System");white
    red
    printf("                 ┃\n");
    printf("        ┃  1-新建信息                                                    ┃\n");
    printf("        ┃  2-读取信息                                                    ┃\n");
    printf("        ┃  3-返回主菜单                                                        ┃\n");
    printf("        ┃                                                                    ┃\n");
    printf("        ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛         \n");
    white

}
void Inhome()//主菜单
{
    home();
    cyan printf("请输入操作代号：");
    white
    int n=0;
    scanf("%d",&n);fflush(stdin);
    switch(n)
    {
    case 1:
        InMainmenu();//进入学籍管理
        break;
    case 2:
        InMainmenu2();//进入一卡通消费管理
        break;
    case 3:
        myexit();break;
    }
}

void InMainmenu()
{
    Mainmenu();
    cyan printf("请输入操作代号：");
    white
    int n=0;
    scanf("%d",&n);fflush(stdin);
    switch(n)
    {
    case 1:
        create1(1);//读入学籍信息
        break;
    case 2:
        Inmenu1();//读取学籍信息
        break;
    case 3:
        Inhome();break;//返回主菜单
    }
}

void InMainmenu2()
{
    Mainmenu();
    cyan printf("请输入操作代号：");
    white
    int n=0;
    scanf("%d",&n);fflush(stdin);
    switch(n)
    {
    case 1:
        create2(1);//读入
        break;
    case 2:
        Inmenu2();//读取
        break;
    case 3:
        Inhome();break;//返回
    }
}

void myexit()
{
    purple printf("\n\n感谢您的使用！！！\n\n");white

printf(" ◢ ██████◣　　　　　　◢████◣  					\n");
printf("◢◤　　　　　　◥◣　　　　◢◤　　　　 ◥◣  		\n");
printf("◤　　　　　　　　◥◣　　◢◤　　　　　　█...  		\n");
printf("▎　　　◢█◣　　　◥◣◢◤　　◢█　　　█  				\n");
printf("◣　　◢◤　　◥◣　　　　　　◢◣◥◣　◢◤.  			\n");
printf("◥██◤　　◢◤　　　　　　　　　◥◣  				\n");
printf("　　　　　　█　●　　　　　　　●　 █  			\n");
printf("　　　　　　█　〃　　　▄　　　〃　█  			\n");
printf("　　　　　　◥◣　　　╚╩╝　　　◢◤  				\n");
printf("　　　　　　　◥█▅▃▃　▃▃▅█◤						\n");
printf("　　　　　　　　　◢◤　　　◥◣　  				\n");
printf("　　　　　　　　　█　　　　　█　  				\n");
printf("　　　　　　　　◢◤▕　　　▎◥◣  					\n");
printf("　　　　　　　▕▃◣◢▅▅▅◣◢▃▕　 			V1.4    \n");system("pause");
exit(1);
}

int main()
{
    Inhome();
    myexit();
    return 0;
}
