#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

void Inmenu_find1()
{
    menu_find1();
    white
    int n;
    struct student *head;
    head=Myread1();
    cyan printf("������������ţ�");white
    scanf("%d",&n);fflush(stdin);
    switch(n)
    {
    case 1:
        num_find(head);//1-��ѧ�Ų���&�޸�+
        break;
    case 2:
        id_find(head);//2-�����Ų���&�޸�+
        break;
    case 3:
        name_find(head);//3-����������&�޸�+
        break;
    case 4:
        Inmenu1();//4-���ص���ȡѧ����Ϣ�˵�
        break;
    }
    Inmenu1();
}

void menu_find1()
{
    system("cls");
    red
    printf("        ��������������������������������������������������������������������������������������������������������������������������������������������\n");               //
    printf("        ��                   ����&�޸Ĳ˵�                   ��\n");
    printf("        ��  1-��ѧ�Ų���&�޸�&ɾ��                           ��\n");
    printf("        ��  2-�����Ų���&�޸�&ɾ��                           ��\n");
    printf("        ��  3-����������&�޸�&ɾ��                           ��\n");
    printf("        ��  4-���ص���ȡѧ����Ϣ�˵�                         ��\n");
    printf("        ��������������������������������������������������������������������������������������������������������������������������������������������\n");               //
    white

}

void Inmenu_find2()
{
    menu_find2();
    white
    int n;
    struct use *head;
    head=Myread2();
    cyan printf("������������ţ�");white
    scanf("%d",&n);fflush(stdin);
    switch(n)
    {
    case 1:
        id_find2(head);//1-�����Ų���&�޸�+
        break;
    case 2:
        Inmenu2();//2-���ص���ȡһ��ͨ��Ϣ�˵�
        break;
    }
    Inmenu2();
}

void menu_find2()
{
    system("cls");
    red
    printf("        ��������������������������������������������������������������������������������������������������������������������������������������������\n");               //
    printf("        ��                   ����&�޸Ĳ˵�                   ��\n");
    printf("        ��  1-�����Ų���&�޸�&ɾ��                           ��\n");
    printf("        ��  2-���ص���ȡһ��ͨ��Ϣ�˵�                       ��\n");
    printf("        ��������������������������������������������������������������������������������������������������������������������������������������������\n");               //
    white

}
