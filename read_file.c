#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

struct student * Myread1()
{
    int i=0;
    cyan printf("�����������ȡ�ļ��ĵ�ַ��");
    white
    scanf("%s",ps);
    fflush(stdin);
    FILE *fp=NULL;
    fp=fopen(ps,"r+");
    if(fp==NULL)
    {
        red printf("���ļ�ʧ�ܣ�����\n");
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
        //��������
        fscanf(fp,"%d ",&q->num);
        fscanf(fp,"%d ",&q->id);
        fscanf(fp,"%s ",q->name);
        fscanf(fp,"%s ",q->birplace);
        fscanf(fp,"%d ",&q->grade);
        fscanf(fp,"%s ",q->major);
        fscanf(fp,"%d ",&q->status);
        //��������

        q->next=NULL;
        //β����
        r->next=q;
        r=q;
    }
    yellow printf("��ȡ���ݳɹ�\n");
    //printf("%d",p->next->num);
    white
    fclose(fp);
    system("pause");
    return p;
}

struct use * Myread2()
{
    int i=0;
    cyan printf("�����������ȡ�ļ��ĵ�ַ��");
    white
    scanf("%s",ps);
    fflush(stdin);
    FILE *fp=NULL;
    fp=fopen(ps,"r+");
    if(fp==NULL)
    {
        red printf("���ļ�ʧ�ܣ�����\n");
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
        //��������
        fscanf(fp,"%d ",&q->id);
        fscanf(fp,"%s ",q->book);
        fscanf(fp,"%s ",q->food);
        //��������

        q->next=NULL;
        //β����
        r->next=q;
        r=q;
    }
    yellow printf("��ȡ���ݳɹ�\n");
    //printf("%d",p->next->num);
    white
    fclose(fp);
    system("pause");
    return p;
}
