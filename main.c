#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include "headfile.h"

/*����˼·��
һ��ѡ�������������
{
   1.ѧ����Ϣ
   2.һ��ͨ��Ϣ
   3.һ��ͨ���Ѽ�¼
}
������Ϣ
���ļ���ʽ����

������ȡ�ļ�
{
    1������¼

    2��ȡ-��ʾĳ·���µ���Ϣ
{
        1.��ʾȫ��
        2.��ѯĳ����ѧ�š���������-->>link to 3�޸� ɾ��
}
    3��ȡ-�޸�ĳ·���µ���Ϣ
{
        1.����--�޸�ĳ����¼
        2.����--ɾ��ĳ����¼
        д���ļ�
}
    4��ȡ-����ĳ·���µ�ѧ����Ϣ
{
        ����ѧ�š�����
}

}

����ͳ������
{
  һ3-->>1������ܻ�ӭͼ��+��Ӧ����
         2������ܻ�ӭʳ��+��Ӧ����
}
*/

void home()
{
    system("cls");
    red
    printf("\n");

    printf("        ��������������������������������������������������������������������������������������������������������������������������������������������\n");
    printf("        ��                   ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY|BACKGROUND_BLUE|BACKGROUND_GREEN );
    printf("Welcome to School Manager System");white
    red
    printf("                 ��\n");
    printf("        ��  1-����ѧ����Ϣ                                                    ��\n");
    printf("        ��  2-����һ��ͨ���Ѽ�¼                                              ��\n");
    printf("        ��  3-�˳�ϵͳ                                                        ��\n");
    printf("        ��                                                                    ��\n");
    printf("        ��������������������������������������������������������������������������������������������������������������������������������������������         --v1.4\n");
    white
}

void Mainmenu()
{
    system("cls");
    red
    printf("\n");

    printf("        ��������������������������������������������������������������������������������������������������������������������������������������������\n");
    printf("        ��                   ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY|BACKGROUND_BLUE|BACKGROUND_GREEN );
    printf("Welcome to School Manager System");white
    red
    printf("                 ��\n");
    printf("        ��  1-�½���Ϣ                                                    ��\n");
    printf("        ��  2-��ȡ��Ϣ                                                    ��\n");
    printf("        ��  3-�������˵�                                                        ��\n");
    printf("        ��                                                                    ��\n");
    printf("        ��������������������������������������������������������������������������������������������������������������������������������������������         \n");
    white

}
void Inhome()//���˵�
{
    home();
    cyan printf("������������ţ�");
    white
    int n=0;
    scanf("%d",&n);fflush(stdin);
    switch(n)
    {
    case 1:
        InMainmenu();//����ѧ������
        break;
    case 2:
        InMainmenu2();//����һ��ͨ���ѹ���
        break;
    case 3:
        myexit();break;
    }
}

void InMainmenu()
{
    Mainmenu();
    cyan printf("������������ţ�");
    white
    int n=0;
    scanf("%d",&n);fflush(stdin);
    switch(n)
    {
    case 1:
        create1(1);//����ѧ����Ϣ
        break;
    case 2:
        Inmenu1();//��ȡѧ����Ϣ
        break;
    case 3:
        Inhome();break;//�������˵�
    }
}

void InMainmenu2()
{
    Mainmenu();
    cyan printf("������������ţ�");
    white
    int n=0;
    scanf("%d",&n);fflush(stdin);
    switch(n)
    {
    case 1:
        create2(1);//����
        break;
    case 2:
        Inmenu2();//��ȡ
        break;
    case 3:
        Inhome();break;//����
    }
}

void myexit()
{
    purple printf("\n\n��л����ʹ�ã�����\n\n");white

printf(" �� ��������������������������������������  					\n");
printf("���������������������������������������� ����  		\n");
printf("��������������������������������������������...  		\n");
printf("��������������������������������������������  				\n");
printf("��������������������������������������������.  			\n");
printf("��������������������������������������  				\n");
printf("�����������������񡡡������������� ��  			\n");
printf("�������������������������{������������  			\n");
printf("�����������������������^�m�a����������  				\n");
printf("�������������������|�z�z���z�z�|����						\n");
printf("����������������������������������  				\n");
printf("����������������������������������  				\n");
printf("����������������������������������  					\n");
printf("�����������������z�����|�|�|�����z���� 			V1.4    \n");system("pause");
exit(1);
}

int main()
{
    Inhome();
    myexit();
    return 0;
}
