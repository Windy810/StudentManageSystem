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
    cyan printf("��Ҫ�����ѧ��ѧ�����ݵ�������");
    white
    scanf("%d",&n);

    p=(struct student*)calloc(1,sizeof(struct student ));
    p->next=NULL;
    r=p;
    for(i=0; i<n; i++)
    {
        q=(struct student*)calloc(1,sizeof(struct student ));
        //��������
        cyan printf("����ѧ�ţ�");
        white scanf("%d",&q->num);

        cyan printf("���뿨�ţ�");
        white scanf("%d",&q->id);

        cyan printf("����������");
        white scanf("%s",q->name);
        //getchar();

        cyan printf("������Դ�أ�");
        white scanf("%s",q->birplace);

        cyan printf("�����꼶��");
        white scanf("%d",&q->grade);

        cyan printf("����רҵ��");
        white scanf("%s",q->major);

        cyan printf("����һ��ͨ״̬��");
        white scanf("%d",&q->status);
        while(q->status!=0&&q->status!=1)//�Ƿ�������
        {
            getchar();
            red printf("�Ƿ����룡����\n");
            fflush(stdin);
            white
            cyan printf("����һ��ͨ״̬��");
            white scanf("%d",&q->status);
        }
        //�������

        q->next=NULL;
        //β����
        r->next=q;
        r=q;
    }
    //��ʾ�ڴ����Ѿ��������Ϣ
    output1((struct student*)p);
    cyan printf("����Ϣ����������Y/y������Ϣ�Ĵ洢\n����Ϣ����������N/n��������\n�����룺");
    white
    getchar();
    scanf("%c",&m);
    if(m=='Y'||m=='y')
        save1(p,pre);//�����1
    else if(m=='N'||m=='n')
        InMainmenu();

    if(pre==1)
        InMainmenu();
    else if(pre==2)
        Inmenu1();//��ѧ����Ϣ�����޸�
    //return p;
}

void create2(int pre)
{
    char m;
    int j=0,i=0,n=0;
    struct use *p,*q,*r;
    cyan printf("��Ҫ�����һ��ͨ�������ݵ�������");
    white
    scanf("%d",&n);

    p=(struct use*)calloc(1,sizeof(struct use ));
    p->next=NULL;
    r=p;
    for(i=0; i<n; i++)
    {
        q=(struct use*)calloc(1,sizeof(struct use ));
        //��������
        cyan printf("���뿨�ţ�");
        white scanf("%d",&q->id);

        cyan printf("��������鼮��");
        white scanf("%s",q->book);
        //getchar();

        cyan printf("�����������ʳ�");
        white scanf("%s",q->food);
        //�������

        q->next=NULL;
        //β����
        r->next=q;
        r=q;
    }
    //��ʾ�ڴ����Ѿ������ѧ������Ϣ
    output2((struct use*)p);
    cyan printf("����Ϣ����������Y/y������Ϣ�Ĵ洢\n����Ϣ����������N/n��������\n�����룺");
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

