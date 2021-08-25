#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

struct student * Myread1()
{
    int i=0;
    cyan printf("请输入你想读取文件的地址：");
    white
    scanf("%s",ps);
    fflush(stdin);
    FILE *fp=NULL;
    fp=fopen(ps,"r+");
    if(fp==NULL)
    {
        red printf("打开文件失败！！！\n");
        white
        system("pause");
        InMainmenu();
    }
    struct student *p,*q,*r;

    p=(struct student*)calloc(1,sizeof(struct student ));
    r=p;
    while(!feof(fp))
    {
        q=(struct student*)calloc(1,sizeof(struct student ));
        //读出数据
        fscanf(fp,"%d ",&q->num);
        fscanf(fp,"%d ",&q->id);
        fscanf(fp,"%s ",q->name);
        fscanf(fp,"%s ",q->birplace);
        fscanf(fp,"%d ",&q->grade);
        fscanf(fp,"%s ",q->major);
        fscanf(fp,"%d ",&q->status);
        //读出结束

        q->next=NULL;
        //尾插入
        r->next=q;
        r=q;
    }
    yellow printf("读取数据成功\n");
    //printf("%d",p->next->num);
    white
    fclose(fp);
    system("pause");
    return p;
}

struct use * Myread2()
{
    int i=0;
    cyan printf("请输入你想读取文件的地址：");
    white
    scanf("%s",ps);
    fflush(stdin);
    FILE *fp=NULL;
    fp=fopen(ps,"r+");
    if(fp==NULL)
    {
        red printf("打开文件失败！！！\n");
        white
        system("pause");
        InMainmenu();
    }
    struct use *p,*q,*r;

    p=(struct use*)calloc(1,sizeof(struct use));
    r=p;
    while(!feof(fp))
    {
        q=(struct use*)calloc(1,sizeof(struct use ));
        //读出数据
        fscanf(fp,"%d ",&q->id);
        fscanf(fp,"%s ",q->book);
        fscanf(fp,"%s ",q->food);
        //读出结束

        q->next=NULL;
        //尾插入
        r->next=q;
        r=q;
    }
    yellow printf("读取数据成功\n");
    //printf("%d",p->next->num);
    white
    fclose(fp);
    system("pause");
    return p;
}
