#ifndef HEADFILE_H_INCLUDED
#define HEADFILE_H_INCLUDED

#define N 3

#define green SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_INTENSITY );
#define red SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY );
#define blue SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY );
#define purple SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
#define yellow SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
#define cyan SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
#define white SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_RED);

struct student
{
    int num;
    int id;
    char name[20];
    char birplace[20];
    int grade;
    char major[20];
    int status;
    struct student *next;
};


struct use
{
    int id;
    char book[20];
    char food[20];
    struct use *next;
};

char ps[100];
//count_file
void dt();
void count(char str1[20],char str2[20]);
void cmp();
void find_people_id(int id,char k[100],char d[1000]);
void find_people1(char name[20],int id);
void find_people2(char name[20],int id);

//create_file
void create1(int pre);
void create2(int pre);

//find_file
void num_find(struct student *head);
void name_find(struct student *head);
void id_find(struct student *head);
void id_find2(struct use *head);

//main
void home();
void Mainmenu();
void Inhome();
void InMainmenu();
void InMainmenu2();
int main();
void myexit();

//menu
void Inmenu1();
void Menu1();
void Addnew1 (int pre);
void Inmenu2();
void Menu2();
void Addnew2(int pre);

//menu_find
void Inmenu_find1();
void menu_find1();
void Inmenu_find2();
void menu_find2();

//output_file
void outputAll1();
void output1(struct student *head);
void outputAll2();
void output2(struct use *head);

//read_file
struct student * Myread1();
struct use * Myread2();

//save_file
void save1(struct student *head,int pre);
void save2(struct use *head,int pre);

#endif // HEADFILE_H_INCLUDED


