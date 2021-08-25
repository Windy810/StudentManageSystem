#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

void outputAll1()
{
    struct student *head;
    head=Myread1();
    output1(head);
    system("pause");
}
void output1(struct student *head)
{
    head=head->next;
        purple printf("+--------------------------------------------------------------------------------------------------------------------+\n");white
    while(head!=NULL)
    {

        purple printf("|");white
        cyan printf("学号：");white green printf("%-12d",head->num);white
        cyan printf("卡号：");white green printf("%-12d",head->id);white
        cyan printf("姓名：");white green printf("%-10s",head->name);white
        cyan printf("生源地：");white green printf("%-10s",head->birplace);white
        cyan printf("年级：");white green printf("%-10d",head->grade);white
        cyan printf("专业：");white green printf("%-12s",head->major);white
        cyan printf("一卡通状态：");white green printf("%-10d",head->status);white

        purple printf("|\n");white
        purple printf("+--------------------------------------------------------------------------------------------------------------------+\n");white
        head=head->next;
    }

}

void outputAll2()
{
    struct use *head;
    head=Myread2();
    output2(head);
    system("pause");
}
void output2(struct use *head)
{
    head=head->next;
        purple printf("+--------------------------------------------------------------------------------------------------------------------+\n");white
    while(head!=NULL)
    {

        purple printf("|");white
        cyan printf("卡号：");white green printf("%-12d",head->id);white
        cyan printf("借阅书籍：");white green printf("%-10s",head->book);white
        cyan printf("常点菜品：");white green printf("%-10s",head->food);white

        purple printf("|\n");white
        purple printf("+--------------------------------------------------------------------------------------------------------------------+\n");white
        head=head->next;
    }

}
