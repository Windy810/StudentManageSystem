#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

void Inmenu1()
{

    //FILE *fp=NULL;
    struct student *head;
    Menu1();
    int n;

    cyan printf("�������������Ĳ������ţ�");
    white
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        outputAll1();
        break;
    case 2:
        Addnew1(2);
        break;
    case 3:
        Inmenu_find1();
        break;
    case 4:
        InMainmenu();
        break;
    }
    Inmenu1();
}
void Menu1()
{

    system("cls");
    red
    printf("        ��������������������������������������������������������������������������������������������������������������������������������������������\n");
    printf("        ��                       ��ȡѧ����Ϣ�˵�            ��\n");
    printf("        ��  1-��ʾָ���ļ���ȫ��ѧ����¼                     ��\n");
    printf("        ��  2-��ָ���ļ�������ѧ����¼                       ��\n");
    printf("        ��  3-��ѯ&�޸�&ɾ��ָ���ļ��ļ�¼                   ��\n");
    printf("        ��  4-������һ���˵�                                 ��\n");
    printf("        ��  ��ʾ�����˵�������Ҫ����������ļ��ĵ�ַ         ��\n");
    printf("        ��������������������������������������������������������������������������������������������������������������������������������������������\n");
    white
}
void Addnew1 (int pre)
{
    struct student *head;
    head=Myread1();
    create1(2);
}

void Inmenu2()
{

    //FILE *fp=NULL;
    struct use *head;
    Menu2();
    int n;

    cyan printf("�������������Ĳ������ţ�");
    white
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        outputAll2();
        break;
    case 2:
        Addnew2(2);
        break;
    case 3:
        Inmenu_find2();
        break;
    case 4:
        dt();
        break;
    case 5:
        InMainmenu2();
        break;
    }
    Inmenu2();
}
void Menu2()
{

    system("cls");
    red
    printf("        ��������������������������������������������������������������������������������������������������������������������������������������������\n");
    printf("        ��                       ��ȡһ��ͨ��Ϣ�˵�          ��\n");
    printf("        ��  1-��ʾָ���ļ���ȫ��һ��ͨ���Ѽ�¼               ��\n");
    printf("        ��  2-��ָ���ļ�������ѧ�����Ѽ�¼                   ��\n");
    printf("        ��  3-��ѯ&�޸�&ɾ��ָ���ļ��ļ�¼                   ��\n");
    printf("        ��  4-ͳ�Ʋ�������ܻ�ӭ���鼮��ʳ��                 ��\n");
    printf("        ��  5-������һ���˵�                                 ��\n");
    printf("        ��  ��ʾ�����˵�������Ҫ����������ļ��ĵ�ַ         ��\n");
    printf("        ��������������������������������������������������������������������������������������������������������������������������������������������\n");
    white
}
void Addnew2(int pre)
{
    struct use *head;
    head=Myread2();
    create2(2);
}
