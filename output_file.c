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
        cyan printf("ѧ�ţ�");white green printf("%-12d",head->num);white
        cyan printf("���ţ�");white green printf("%-12d",head->id);white
        cyan printf("������");white green printf("%-10s",head->name);white
        cyan printf("��Դ�أ�");white green printf("%-10s",head->birplace);white
        cyan printf("�꼶��");white green printf("%-10d",head->grade);white
        cyan printf("רҵ��");white green printf("%-12s",head->major);white
        cyan printf("һ��ͨ״̬��");white green printf("%-10d",head->status);white

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
        cyan printf("���ţ�");white green printf("%-12d",head->id);white
        cyan printf("�����鼮��");white green printf("%-10s",head->book);white
        cyan printf("�����Ʒ��");white green printf("%-10s",head->food);white

        purple printf("|\n");white
        purple printf("+--------------------------------------------------------------------------------------------------------------------+\n");white
        head=head->next;
    }

}
