#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

void save1(struct student *head,int pre)
{
    FILE *fp=NULL;

    if(pre==1)//创建文件
    {
        red printf("请输入储存地址：");
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
            yellow printf("保存成功！\n");
            white
            system("pause");
        }
        else
        {
            red printf("文件打开失败！！！\n");
            white
            save1(head,pre);
        }
    }
///////////////////////////////////////////////////////
    else if(pre==2)//追加数据
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
            yellow printf("保存成功\n");
            white
            system("pause");
        }
        else
        {
            red printf("文件打开失败！！！\n");
            white
            save1(head,pre);
        }
    }
///////////////////////////////////////////////////////
    else if(pre==3)//修改覆盖
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
            yellow printf("保存成功\n");
            white
            system("pause");
        }
        else
        {
            red printf("文件打开失败！！！\n");
            white
            save1(head,pre);
        }

    }
}

void save2(struct use *head,int pre)
{
    FILE *fp=NULL;

    if(pre==1)//创建文件
    {
        red printf("请输入储存地址：");
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
            yellow printf("保存成功！\n");
            white
            system("pause");
        }
        else
        {
            red printf("文件打开失败！！！\n");
            white
            save1(head,pre);
        }
    }
///////////////////////////////////////////////////////
    else if(pre==2)//追加数据
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
            yellow printf("保存成功\n");
            white
            system("pause");
        }
        else
        {
            red printf("文件打开失败！！！\n");
            white
            save1(head,pre);
        }
    }
///////////////////////////////////////////////////////
    else if(pre==3)//修改覆盖
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
            yellow printf("保存成功\n");
            white
            system("pause");
        }
        else
        {
            red printf("文件打开失败！！！\n");
            white
            save1(head,pre);
        }

    }
}
