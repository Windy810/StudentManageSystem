#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

void Inmenu1()
{

    //FILE *fp=NULL;
    struct student *head;
    Menu1();
    int n;

    cyan printf("请输入你想做的操作代号：");
    white
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        outputAll1();
        break;
    case 2:
        Addnew1(2);
        break;
    case 3:
        Inmenu_find1();
        break;
    case 4:
        InMainmenu();
        break;
    }
    Inmenu1();
}
void Menu1()
{

    system("cls");
    red
    printf("        ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("        ┃                       读取学生信息菜单            ┃\n");
    printf("        ┃  1-显示指定文件的全部学生记录                     ┃\n");
    printf("        ┃  2-向指定文件中新增学生记录                       ┃\n");
    printf("        ┃  3-查询&修改&删除指定文件的记录                   ┃\n");
    printf("        ┃  4-返回上一级菜单                                 ┃\n");
    printf("        ┃  提示：本菜单操作需要输入操作的文件的地址         ┃\n");
    printf("        ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
    white
}
void Addnew1 (int pre)
{
    struct student *head;
    head=Myread1();
    create1(2);
}

void Inmenu2()
{

    //FILE *fp=NULL;
    struct use *head;
    Menu2();
    int n;

    cyan printf("请输入你想做的操作代号：");
    white
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        outputAll2();
        break;
    case 2:
        Addnew2(2);
        break;
    case 3:
        Inmenu_find2();
        break;
    case 4:
        dt();
        break;
    case 5:
        InMainmenu2();
        break;
    }
    Inmenu2();
}
void Menu2()
{

    system("cls");
    red
    printf("        ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
    printf("        ┃                       读取一卡通信息菜单          ┃\n");
    printf("        ┃  1-显示指定文件的全部一卡通消费记录               ┃\n");
    printf("        ┃  2-向指定文件中新增学生消费记录                   ┃\n");
    printf("        ┃  3-查询&修改&删除指定文件的记录                   ┃\n");
    printf("        ┃  4-统计并输出最受欢迎的书籍和食物                 ┃\n");
    printf("        ┃  5-返回上一级菜单                                 ┃\n");
    printf("        ┃  提示：本菜单操作需要输入操作的文件的地址         ┃\n");
    printf("        ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
    white
}
void Addnew2(int pre)
{
    struct use *head;
    head=Myread2();
    create2(2);
}
