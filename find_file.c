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
    cyan printf("������Ŀ��ѧ����ѧ�ţ�");
    white
    scanf("%d",&num);
    fflush(stdin);
    struct student *headp,*prem,*findnotehead,findnote;//������ҵ��Ľڵ�
    findnotehead=(struct student *)calloc(1,sizeof(struct student));//�ڵ�ͷ���ڴ���output����

    headp=head;
    prem=head;
    head=head->next;
    while(head)
    {
        if(head->num==num)
        {
            cyan printf("�Ѿ����ҵ�Ŀ�꣺");
            flag=1;
            yellow printf("%d\n",num);
            white
            findnote=*head;
            findnote.next=NULL;
            findnotehead->next=&findnote;
            output1(findnotehead);
            cyan printf("�Ƿ�����޸ģ�y/n��");
            white
            scanf("%c",&m);
            fflush(stdin);
            if(m=='y')
            {
                char x;
                cyan printf("�޸�����������:r\nɾ������������:d\n�����룺");
                white
                scanf("%c",&x);
                fflush(stdin);
                if(x=='r')
                {
                    yellow printf("�����¼�����Ϣ��");
                    white

                    cyan printf("����ѧ�ţ�");
                    white scanf("%d",&head->num);

                    cyan printf("���뿨�ţ�");
                    white scanf("%d",&head->id);

                    cyan printf("����������");
                    white scanf("%s",head->name);
                    //getchar();

                    cyan printf("������Դ�أ�");
                    white scanf("%s",head->birplace);

                    cyan printf("�����꼶��");
                    white scanf("%d",&head->grade);

                    cyan printf("����רҵ��");
                    white scanf("%s",head->major);

                    cyan printf("����һ��ͨ״̬��");
                    white scanf("%d",&head->status);
                    while(head->status!=0&&head->status!=1)//�Ƿ�������
                    {
                        getchar();
                        red printf("�Ƿ����룡����\n");
                        fflush(stdin);
                        white
                        cyan printf("����һ��ͨ״̬��");
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
                    red printf("�Ƿ����룡����");
                    white
                }
            }
            else if(m=='n')
            {
                cyan printf("���ص���ȡѧ����Ϣ�˵�\n");
                system("pause");
                white
            }
            else
            {
                red printf("�Ƿ����룡����");
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
        red printf("û�в��ҵ���Ŀ��ѧ��������\n");
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
    cyan printf("������Ŀ��ѧ����������");
    white
    scanf("%s",name);
    fflush(stdin);
    struct student *headp,*prem,*findnotehead,findnote;//������ҵ��Ľڵ�
    findnotehead=(struct student *)calloc(1,sizeof(struct student));//�ڵ�ͷ���ڴ���output����


    headp=head;
    prem=head;
    head=(struct student*)head->next;
    while(head)
    {
        if(strcmp(head->name,name)==0)
        {
            cyan printf("�Ѿ����ҵ�Ŀ�꣺");
            flag=1;
            yellow printf("%s\n",name);
            white
            findnote=*head;
            findnote.next=NULL;
            findnotehead->next=&findnote;
            output1(findnotehead);

            cyan printf("�Ƿ�����޸Ļ�ɾ��������y/n��");
            white
            scanf("%c",&m);
            fflush(stdin);
            if(m=='y')
            {
                char x;
                cyan printf("�޸�����������:r\nɾ������������:d\n�����룺");
                white
                scanf("%c",&x);
                fflush(stdin);
                if(x=='r')
                {
                    //
                    yellow printf("�����¼�����Ϣ��");
                    white

                    cyan printf("����ѧ�ţ�");
                    white scanf("%d",&head->num);

                    cyan printf("���뿨�ţ�");
                    white scanf("%d",&head->id);

                    cyan printf("����������");
                    white scanf("%s",head->name);
                    //getchar();

                    cyan printf("������Դ�أ�");
                    white scanf("%s",head->birplace);

                    cyan printf("�����꼶��");
                    white scanf("%d",&head->grade);

                    cyan printf("����רҵ��");
                    white scanf("%s",head->major);

                    cyan printf("����һ��ͨ״̬��");
                    white scanf("%d",&head->status);
                    while(head->status!=0&&head->status!=1)//�Ƿ�������
                    {
                        getchar();
                        red printf("�Ƿ����룡����\n");
                        fflush(stdin);
                        white
                        cyan printf("����һ��ͨ״̬��");
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
                    red printf("�Ƿ����룡����");
                    white
                }
            }
            else if(m=='n')
            {
                cyan printf("���ص���ȡѧ����Ϣ�˵�\n");
                system("pause");
                white
            }
            else
            {
                red printf("�Ƿ����룡����");
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
        red printf("û�в��ҵ���Ŀ��ѧ��������\n");
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
    cyan printf("������Ŀ��ѧ���Ŀ��ţ�");
    white
    scanf("%d",&num);
    fflush(stdin);
    struct student *headp,*prem,*findnotehead,findnote;//������ҵ��Ľڵ�
    findnotehead=(struct student *)calloc(1,sizeof(struct student));//�ڵ�ͷ���ڴ���output����

    headp=head;
    prem=head;
    head=head->next;
    while(head)
    {
        if(head->id==num)
        {
            cyan printf("�Ѿ����ҵ�Ŀ�꣺");
            flag=1;
            yellow printf("%d\n",num);
            white
            findnote=*head;
            findnote.next=NULL;
            findnotehead->next=&findnote;
            output1(findnotehead);

            cyan printf("�Ƿ�����޸ģ�y/n��");
            white scanf("%c",&m);
            fflush(stdin);
            if(m=='y')
            {
                char x;
                cyan printf("�޸�����������:r\nɾ������������:d\n�����룺");
                white
                scanf("%c",&x);
                fflush(stdin);
                if(x=='r')
                {
                    yellow printf("�����¼�����Ϣ��");
                    white

                    cyan printf("����ѧ�ţ�");
                    white scanf("%d",&head->num);

                    cyan printf("���뿨�ţ�");
                    white scanf("%d",&head->id);

                    cyan printf("����������");
                    white scanf("%s",head->name);
                    //getchar();

                    cyan printf("������Դ�أ�");
                    white scanf("%s",head->birplace);

                    cyan printf("�����꼶��");
                    white scanf("%d",&head->grade);

                    cyan printf("����רҵ��");
                    white scanf("%s",head->major);

                    cyan printf("����һ��ͨ״̬��");
                    white scanf("%d",&head->status);
                    while(head->status!=0&&head->status!=1)//�Ƿ�������
                    {
                        getchar();
                        red printf("�Ƿ����룡����\n");
                        fflush(stdin);
                        white
                        cyan printf("����һ��ͨ״̬��");
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
                    red printf("�Ƿ����룡����");
                    white
                }
            }
            else if(m=='n')
            {
                cyan printf("���ص���ȡѧ����Ϣ�˵�\n");
                system("pause");
                white
            }
            else
            {
                red printf("�Ƿ����룡����");
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
        red printf("û�в��ҵ���Ŀ��ѧ��������\n");
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
    cyan printf("������Ŀ��ѧ���Ŀ��ţ�");
    white
    scanf("%d",&num);
    fflush(stdin);
    struct use *headp,*prem,*findnotehead,findnote;//������ҵ��Ľڵ�
    findnotehead=(struct use *)calloc(1,sizeof(struct use));//�ڵ�ͷ���ڴ���output����

    headp=head;
    prem=head;
    head=head->next;
    while(head)
    {
        if(head->id==num)
        {
            cyan printf("�Ѿ����ҵ�Ŀ�꣺");
            flag=1;
            yellow printf("%d\n",num);
            white
            findnote=*head;
            findnote.next=NULL;
            findnotehead->next=&findnote;
            output1(findnotehead);
            cyan printf("�Ƿ�����޸ģ�y/n��");
            white scanf("%c",&m);
            fflush(stdin);
            if(m=='y')
            {
                char x;
                cyan printf("�޸�����������:r\nɾ������������:d\n�����룺");
                white
                scanf("%c",&x);
                fflush(stdin);
                if(x=='r')
                {
                    yellow printf("�����¼�����Ϣ��");
                    white

                    cyan printf("���뿨�ţ�");
                    white scanf("%d",&head->id);

                    cyan printf("��������鼮��");
                    white scanf("%s",head->book);
                    //getchar();

                    cyan printf("�����������ʳ�");
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
                    red printf("�Ƿ����룡����");
                    white
                }
            }
            else if(m=='n')
            {
                cyan printf("���ص���ȡһ��ͨ��Ϣ�˵�\n");
                system("pause");
                white
            }
            else
            {
                red printf("�Ƿ����룡����");
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
        red printf("û�в��ҵ���Ŀ�꿨�ţ�����\n");
        white
        system("pause");
    }
    Inmenu2();
}
