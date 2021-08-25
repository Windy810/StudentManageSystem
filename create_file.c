#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

void create1(int pre)
{
    char m;
    int j=0,i=0,n=0;
    struct student *p,*q,*r;
    cyan printf("需要输入的学生学籍数据的数量：");
    white
    scanf("%d",&n);

    p=(struct student*)calloc(1,sizeof(struct student ));
    p->next=NULL;
    r=p;
    for(i=0; i<n; i++)
    {
        q=(struct student*)calloc(1,sizeof(struct student ));
        //输入数据
        cyan printf("输入学号：");
        white scanf("%d",&q->num);

        cyan printf("输入卡号：");
        white scanf("%d",&q->id);

        cyan printf("输入姓名：");
        white scanf("%s",q->name);
        //getchar();

        cyan printf("输入生源地：");
        white scanf("%s",q->birplace);

        cyan printf("输入年级：");
        white scanf("%d",&q->grade);

        cyan printf("输入专业：");
        white scanf("%s",q->major);

        cyan printf("输入一卡通状态：");
        white scanf("%d",&q->status);
        while(q->status!=0&&q->status!=1)//非法输入检测
        {
            getchar();
            red printf("非法输入！！！\n");
            fflush(stdin);
            white
            cyan printf("输入一卡通状态：");
            white scanf("%d",&q->status);
        }
        //输入结束

        q->next=NULL;
        //尾插入
        r->next=q;
        r=q;
    }
    //显示内存中已经输入的信息
    output1((struct student*)p);
    cyan printf("若信息无误请输入Y/y进行信息的存储\n若信息有误请输入N/n重新输入\n请输入：");
    white
    getchar();
    scanf("%c",&m);
    if(m=='Y'||m=='y')
        save1(p,pre);//储存表1
    else if(m=='N'||m=='n')
        InMainmenu();

    if(pre==1)
        InMainmenu();
    else if(pre==2)
        Inmenu1();//对学生信息进行修改
    //return p;
}

void create2(int pre)
{
    char m;
    int j=0,i=0,n=0;
    struct use *p,*q,*r;
    cyan printf("需要输入的一卡通消费数据的数量：");
    white
    scanf("%d",&n);

    p=(struct use*)calloc(1,sizeof(struct use ));
    p->next=NULL;
    r=p;
    for(i=0; i<n; i++)
    {
        q=(struct use*)calloc(1,sizeof(struct use ));
        //输入数据
        cyan printf("输入卡号：");
        white scanf("%d",&q->id);

        cyan printf("输入借阅书籍：");
        white scanf("%s",q->book);
        //getchar();

        cyan printf("输入消费最多食物：");
        white scanf("%s",q->food);
        //输入结束

        q->next=NULL;
        //尾插入
        r->next=q;
        r=q;
    }
    //显示内存中已经输入的学生的信息
    output2((struct use*)p);
    cyan printf("若信息无误请输入Y/y进行信息的存储\n若信息有误请输入N/n重新输入\n请输入：");
    white
    getchar();
    scanf("%c",&m);
    if(m=='Y'||m=='y')
        save2(p,pre);
    else if(m=='N'||m=='n')
        InMainmenu2();

    if(pre==1)
        InMainmenu2();
    else if(pre==2)
        Inmenu2();
    //return p;
}

