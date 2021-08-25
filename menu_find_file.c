#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

void Inmenu_find1()
{
    menu_find1();
    white
    int n;
    struct student *head;
    head=Myread1();
    cyan printf("请输入操作代号：");white
    scanf("%d",&n);fflush(stdin);
    switch(n)
    {
    case 1:
        num_find(head);//1-按学号查找&修改+
        break;
    case 2:
        id_find(head);//2-按卡号查找&修改+
        break;
    case 3:
        name_find(head);//3-按姓名查找&修改+
        break;
    case 4:
        Inmenu1();//4-返回到读取学生信息菜单
        break;
    }
    Inmenu1();
}

void menu_find1()
{
    system("cls");
    red
    printf("        ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");               //
    printf("        ┃                   查找&修改菜单                   ┃\n");
    printf("        ┃  1-按学号查找&修改&删除                           ┃\n");
    printf("        ┃  2-按卡号查找&修改&删除                           ┃\n");
    printf("        ┃  3-按姓名查找&修改&删除                           ┃\n");
    printf("        ┃  4-返回到读取学生信息菜单                         ┃\n");
    printf("        ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");               //
    white

}

void Inmenu_find2()
{
    menu_find2();
    white
    int n;
    struct use *head;
    head=Myread2();
    cyan printf("请输入操作代号：");white
    scanf("%d",&n);fflush(stdin);
    switch(n)
    {
    case 1:
        id_find2(head);//1-按卡号查找&修改+
        break;
    case 2:
        Inmenu2();//2-返回到读取一卡通信息菜单
        break;
    }
    Inmenu2();
}

void menu_find2()
{
    system("cls");
    red
    printf("        ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");               //
    printf("        ┃                   查找&修改菜单                   ┃\n");
    printf("        ┃  1-按卡号查找&修改&删除                           ┃\n");
    printf("        ┃  2-返回到读取一卡通信息菜单                       ┃\n");
    printf("        ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");               //
    white

}
