#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

void num_find(struct student *head)
{
    int num;
    char m;
    int j,flag=0;
    cyan printf("请输入目标学生的学号：");
    white
    scanf("%d",&num);
    fflush(stdin);
    struct student *headp,*prem,*findnotehead,findnote;//存入查找到的节点
    findnotehead=(struct student *)calloc(1,sizeof(struct student));//节点头便于传入output（）

    headp=head;
    prem=head;
    head=head->next;
    while(head)
    {
        if(head->num==num)
        {
            cyan printf("已经查找到目标：");
            flag=1;
            yellow printf("%d\n",num);
            white
            findnote=*head;
            findnote.next=NULL;
            findnotehead->next=&findnote;
            output1(findnotehead);
            cyan printf("是否进行修改？y/n：");
            white
            scanf("%c",&m);
            fflush(stdin);
            if(m=='y')
            {
                char x;
                cyan printf("修改数据请输入:r\n删除数据请输入:d\n请输入：");
                white
                scanf("%c",&x);
                fflush(stdin);
                if(x=='r')
                {
                    yellow printf("请重新键入信息：");
                    white

                    cyan printf("输入学号：");
                    white scanf("%d",&head->num);

                    cyan printf("输入卡号：");
                    white scanf("%d",&head->id);

                    cyan printf("输入姓名：");
                    white scanf("%s",head->name);
                    //getchar();

                    cyan printf("输入生源地：");
                    white scanf("%s",head->birplace);

                    cyan printf("输入年级：");
                    white scanf("%d",&head->grade);

                    cyan printf("输入专业：");
                    white scanf("%s",head->major);

                    cyan printf("输入一卡通状态：");
                    white scanf("%d",&head->status);
                    while(head->status!=0&&head->status!=1)//非法输入检测
                    {
                        getchar();
                        red printf("非法输入！！！\n");
                        fflush(stdin);
                        white
                        cyan printf("输入一卡通状态：");
                        white scanf("%d",&head->status);
                    }

                    save1(headp,3);
                }
                else if(x=='d')
                {
                    prem->next=head->next;
                    save1(headp,3);
                }
                else
                {
                    red printf("非法输入！！！");
                    white
                }
            }
            else if(m=='n')
            {
                cyan printf("将回到读取学生信息菜单\n");
                system("pause");
                white
            }
            else
            {
                red printf("非法输入！！！");
                white
            }
            break;
        }

        else
        {
            prem=head;
            head=head->next;
        }
    }
    if(flag==0)
    {
        red printf("没有查找到该目标学生！！！\n");
        white
        system("pause");
    }
    Inmenu1();
}
void name_find(struct student *head)
{
    char name[100];
    char m;
    int j,flag=0;
    cyan printf("请输入目标学生的姓名：");
    white
    scanf("%s",name);
    fflush(stdin);
    struct student *headp,*prem,*findnotehead,findnote;//存入查找到的节点
    findnotehead=(struct student *)calloc(1,sizeof(struct student));//节点头便于传入output（）


    headp=head;
    prem=head;
    head=(struct student*)head->next;
    while(head)
    {
        if(strcmp(head->name,name)==0)
        {
            cyan printf("已经查找到目标：");
            flag=1;
            yellow printf("%s\n",name);
            white
            findnote=*head;
            findnote.next=NULL;
            findnotehead->next=&findnote;
            output1(findnotehead);

            cyan printf("是否进行修改或删除操作？y/n：");
            white
            scanf("%c",&m);
            fflush(stdin);
            if(m=='y')
            {
                char x;
                cyan printf("修改数据请输入:r\n删除数据请输入:d\n请输入：");
                white
                scanf("%c",&x);
                fflush(stdin);
                if(x=='r')
                {
                    //
                    yellow printf("请重新键入信息：");
                    white

                    cyan printf("输入学号：");
                    white scanf("%d",&head->num);

                    cyan printf("输入卡号：");
                    white scanf("%d",&head->id);

                    cyan printf("输入姓名：");
                    white scanf("%s",head->name);
                    //getchar();

                    cyan printf("输入生源地：");
                    white scanf("%s",head->birplace);

                    cyan printf("输入年级：");
                    white scanf("%d",&head->grade);

                    cyan printf("输入专业：");
                    white scanf("%s",head->major);

                    cyan printf("输入一卡通状态：");
                    white scanf("%d",&head->status);
                    while(head->status!=0&&head->status!=1)//非法输入检测
                    {
                        getchar();
                        red printf("非法输入！！！\n");
                        fflush(stdin);
                        white
                        cyan printf("输入一卡通状态：");
                        white scanf("%d",&head->status);
                    }
                    save1(headp,3);
                }//
                else if(x=='d')
                {
                    prem->next=head->next;
                    save1(headp,3);
                }
                else
                {
                    red printf("非法输入！！！");
                    white
                }
            }
            else if(m=='n')
            {
                cyan printf("将回到读取学生信息菜单\n");
                system("pause");
                white
            }
            else
            {
                red printf("非法输入！！！");
                white
            }
            break;
        }

        else
        {
            prem=head;
            head=head->next;
        }
    }
    if(flag==0)
    {
        red printf("没有查找到改目标学生！！！\n");
        white
        system("pause");
    }
    Inmenu1();

}
void id_find(struct student *head)
{
    int num;
    char m;
    int j,flag=0;
    cyan printf("请输入目标学生的卡号：");
    white
    scanf("%d",&num);
    fflush(stdin);
    struct student *headp,*prem,*findnotehead,findnote;//存入查找到的节点
    findnotehead=(struct student *)calloc(1,sizeof(struct student));//节点头便于传入output（）

    headp=head;
    prem=head;
    head=head->next;
    while(head)
    {
        if(head->id==num)
        {
            cyan printf("已经查找到目标：");
            flag=1;
            yellow printf("%d\n",num);
            white
            findnote=*head;
            findnote.next=NULL;
            findnotehead->next=&findnote;
            output1(findnotehead);

            cyan printf("是否进行修改？y/n：");
            white scanf("%c",&m);
            fflush(stdin);
            if(m=='y')
            {
                char x;
                cyan printf("修改数据请输入:r\n删除数据请输入:d\n请输入：");
                white
                scanf("%c",&x);
                fflush(stdin);
                if(x=='r')
                {
                    yellow printf("请重新键入信息：");
                    white

                    cyan printf("输入学号：");
                    white scanf("%d",&head->num);

                    cyan printf("输入卡号：");
                    white scanf("%d",&head->id);

                    cyan printf("输入姓名：");
                    white scanf("%s",head->name);
                    //getchar();

                    cyan printf("输入生源地：");
                    white scanf("%s",head->birplace);

                    cyan printf("输入年级：");
                    white scanf("%d",&head->grade);

                    cyan printf("输入专业：");
                    white scanf("%s",head->major);

                    cyan printf("输入一卡通状态：");
                    white scanf("%d",&head->status);
                    while(head->status!=0&&head->status!=1)//非法输入检测
                    {
                        getchar();
                        red printf("非法输入！！！\n");
                        fflush(stdin);
                        white
                        cyan printf("输入一卡通状态：");
                        white scanf("%d",&head->status);
                    }

                    save1(headp,3);
                }
                else if(x=='d')
                {
                    prem->next=head->next;
                    save1(headp,3);
                }
                else
                {
                    red printf("非法输入！！！");
                    white
                }
            }
            else if(m=='n')
            {
                cyan printf("将回到读取学生信息菜单\n");
                system("pause");
                white
            }
            else
            {
                red printf("非法输入！！！");
                white
            }
            break;
        }

        else
        {
            prem=head;
            head=head->next;
        }
    }
    if(flag==0)
    {
        red printf("没有查找到该目标学生！！！\n");
        white
        system("pause");
    }
    Inmenu1();
}

void id_find2(struct use *head)
{
    int num;
    char m;
    int j,flag=0;
    cyan printf("请输入目标学生的卡号：");
    white
    scanf("%d",&num);
    fflush(stdin);
    struct use *headp,*prem,*findnotehead,findnote;//存入查找到的节点
    findnotehead=(struct use *)calloc(1,sizeof(struct use));//节点头便于传入output（）

    headp=head;
    prem=head;
    head=head->next;
    while(head)
    {
        if(head->id==num)
        {
            cyan printf("已经查找到目标：");
            flag=1;
            yellow printf("%d\n",num);
            white
            findnote=*head;
            findnote.next=NULL;
            findnotehead->next=&findnote;
            output1(findnotehead);
            cyan printf("是否进行修改？y/n：");
            white scanf("%c",&m);
            fflush(stdin);
            if(m=='y')
            {
                char x;
                cyan printf("修改数据请输入:r\n删除数据请输入:d\n请输入：");
                white
                scanf("%c",&x);
                fflush(stdin);
                if(x=='r')
                {
                    yellow printf("请重新键入信息：");
                    white

                    cyan printf("输入卡号：");
                    white scanf("%d",&head->id);

                    cyan printf("输入借阅书籍：");
                    white scanf("%s",head->book);
                    //getchar();

                    cyan printf("输入消费最多食物：");
                    white scanf("%s",head->food);

                    save2(headp,3);
                }
                else if(x=='d')
                {
                    prem->next=head->next;
                    save1(headp,3);
                }
                else
                {
                    red printf("非法输入！！！");
                    white
                }
            }
            else if(m=='n')
            {
                cyan printf("将回到读取一卡通信息菜单\n");
                system("pause");
                white
            }
            else
            {
                red printf("非法输入！！！");
                white
            }
            break;
        }

        else
        {
            prem=head;
            head=head->next;
        }
    }
    if(flag==0)
    {
        red printf("没有查找到该目标卡号！！！\n");
        white
        system("pause");
    }
    Inmenu2();
}
