#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

void save1(struct student *head,int pre)
{
    FILE *fp=NULL;

    if(pre==1)//�����ļ�
    {
        red printf("�����봢���ַ��");
        white
        scanf("%s",ps);fflush(stdin);
        if((fp=fopen(ps,"w+"))!=NULL)
        {
            head=(struct student*)head->next;
            while(head!=NULL)
            {
                fprintf(fp,"%d ",head->num);
                fprintf(fp,"%d ",head->id);
                fprintf(fp,"%s ",head->name);
                fprintf(fp,"%s ",head->birplace);
                fprintf(fp,"%d ",head->grade);
                fprintf(fp,"%s ",head->major);
                fprintf(fp,"%d\n",head->status);

                head=(struct student*)head->next;
            }
            fclose(fp);
            yellow printf("����ɹ���\n");
            white
            system("pause");
        }
        else
        {
            red printf("�ļ���ʧ�ܣ�����\n");
            white
            save1(head,pre);
        }
    }
///////////////////////////////////////////////////////
    else if(pre==2)//׷������
    {
        if((fp=fopen(ps,"ab"))!=NULL)
        {
            head=(struct student*)head->next;
            while(head!=NULL)
            {
                fprintf(fp,"%d ",head->num);
                fprintf(fp,"%d ",head->id);
                fprintf(fp,"%s ",head->name);
                fprintf(fp,"%s ",head->birplace);
                fprintf(fp,"%d ",head->grade);
                fprintf(fp,"%s ",head->major);
                fprintf(fp,"%d\n",head->status);

                head=(struct student*)head->next;
            }
            fclose(fp);
            yellow printf("����ɹ�\n");
            white
            system("pause");
        }
        else
        {
            red printf("�ļ���ʧ�ܣ�����\n");
            white
            save1(head,pre);
        }
    }
///////////////////////////////////////////////////////
    else if(pre==3)//�޸ĸ���
    {
        if((fp=fopen(ps,"w+"))!=NULL)
        {
            head=(struct student*)head->next;
            while(head!=NULL)
            {
                fprintf(fp,"%d ",head->num);
                fprintf(fp,"%d ",head->id);
                fprintf(fp,"%s ",head->name);
                fprintf(fp,"%s ",head->birplace);
                fprintf(fp,"%d ",head->grade);
                fprintf(fp,"%s ",head->major);
                fprintf(fp,"%d\n",head->status);

                head=(struct student*)head->next;
            }
            fclose(fp);
            yellow printf("����ɹ�\n");
            white
            system("pause");
        }
        else
        {
            red printf("�ļ���ʧ�ܣ�����\n");
            white
            save1(head,pre);
        }

    }
}

void save2(struct use *head,int pre)
{
    FILE *fp=NULL;

    if(pre==1)//�����ļ�
    {
        red printf("�����봢���ַ��");
        white
        scanf("%s",ps);fflush(stdin);
        if((fp=fopen(ps,"w+"))!=NULL)
        {
            head=(struct use*)head->next;
            while(head!=NULL)
            {
                fprintf(fp,"%d ",head->id);
                fprintf(fp,"%s ",head->book);
                fprintf(fp,"%s\n",head->food);

                head=(struct use*)head->next;
            }
            fclose(fp);
            yellow printf("����ɹ���\n");
            white
            system("pause");
        }
        else
        {
            red printf("�ļ���ʧ�ܣ�����\n");
            white
            save1(head,pre);
        }
    }
///////////////////////////////////////////////////////
    else if(pre==2)//׷������
    {
        if((fp=fopen(ps,"ab"))!=NULL)
        {
            head=(struct use*)head->next;
            while(head!=NULL)
            {
                fprintf(fp,"%d ",head->id);
                fprintf(fp,"%s ",head->book);
                fprintf(fp,"%s\n",head->food);

                head=(struct use*)head->next;
            }
            fclose(fp);
            yellow printf("����ɹ�\n");
            white
            system("pause");
        }
        else
        {
            red printf("�ļ���ʧ�ܣ�����\n");
            white
            save1(head,pre);
        }
    }
///////////////////////////////////////////////////////
    else if(pre==3)//�޸ĸ���
    {
        if((fp=fopen(ps,"w+"))!=NULL)
        {
            head=(struct use*)head->next;
            while(head!=NULL)
            {
                fprintf(fp,"%d ",head->id);
                fprintf(fp,"%s ",head->book);
                fprintf(fp,"%s\n",head->food);

                head=(struct use*)head->next;
            }
            fclose(fp);
            yellow printf("����ɹ�\n");
            white
            system("pause");
        }
        else
        {
            red printf("�ļ���ʧ�ܣ�����\n");
            white
            save1(head,pre);
        }

    }
}
