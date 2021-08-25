#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

char b[100][20],f[1000][20];
int i=0,j[3],m[100],n[100],max1=0,max2=0;
int bid[100],fid[100],v=0,c=0;

void dt()
{
    struct use *head,*pp;
    pp=Myread2();

    memset(b,0,sizeof(b));
    memset(f,0,sizeof(f));
    memset(m,0,sizeof(m));
    memset(n,0,sizeof(n));

    head=pp->next;
    while(head!=NULL)
    {
        count(head->book,head->food);
        head=head->next;
    }//将各种书、食物放到数组里
    cmp();//比较得出最大值

    head=pp->next;//指针归到初始位置
    while(head!=NULL)
    {
        find_people_id(head->id,head->book,head->food);
        head=head->next;
    }//找到喜欢它们的学生id

    struct student *p,*qq;
    qq=Myread1();

    purple printf("+--------------------------------------------------------------------------------------------------------------------+\n");white
    blue printf("***最受欢迎的书***");white
    printf("  ||%s\n",b[j[1]]);
    p=qq->next;
    purple printf("+--------------------------------------------------------------------------------------------------------------------+\n");white
    blue printf(" ***喜爱其的学生*** ");white
    printf("||");
    while(p!=NULL)
    {
        find_people1(p->name,p->id);
        p=p->next;
    }
    printf("\n");
    purple printf("+--------------------------------------------------------------------------------------------------------------------+\n");white

    purple printf("+--------------------------------------------------------------------------------------------------------------------+\n");white
    blue printf("***最受欢迎的菜***");white
    printf("  ||%s\n",f[j[2]]);
    p=qq->next;
    purple printf("+--------------------------------------------------------------------------------------------------------------------+\n");white
    blue printf(" ***喜爱其的学生*** ");white
    printf("||");
    while(p!=NULL)
    {
        find_people2(p->name,p->id);
        p=p->next;
    }
    printf("\n");
    purple printf("+--------------------------------------------------------------------------------------------------------------------+\n");white

    system("@pause");
}

void count(char str1[20],char str2[20])
{
    for(i=0; i<100; i++)
    {
        if(strcmp(str1,b[i])==0)
        {
            m[i]++;
            break;
        }
    }
    if(i==100)
        for(i=0; i<100; i++)
        {
            if(b[i][0]==0)
            {
                strcpy(b[i],str1);
                m[i]++;
                break;
            }
        }

    for(i=0; i<100; i++)
    {
        if(strcmp(str2,f[i])==0)
        {
            n[i]++;
            break;
        }
    }
    if(i==100)
        for(i=0; i<100; i++)
        {
            if(f[i][0]==0)
            {
                strcpy(f[i],str2);
                n[i]++;
                break;
            }
        }

}

void cmp()
{
    for(i=0; i<100; i++)
        if(m[i]>max1)
            max1=m[i],
            j[1]=i;
    for(i=0; i<100; i++)
        if(n[i]>max2)
            max2=n[i],
            j[2]=i;
}

void find_people_id(int id,char k[100],char d[1000])
{
    //shu
    if(strcmp(k,b[j[1]])==0)
    {
        bid[v]=id;
        v++;
    }

    //cai
    if(strcmp(d,f[j[2]])==0)
    {
        fid[c]=id;
        c++;
    }
}

void find_people1(char name[20],int id)
{
    int a;
    for(a=0; a<v; a++)
        if(id==bid[a])
           printf("%s ",name);
}

void find_people2(char name[20],int id)
{
    int a;
    for(a=0; a<c; a++)
        if(id==fid[a])
            printf("%s ",name);
    //printf("\n");
}
