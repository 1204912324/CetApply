#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ADMIN 000000;
enum bool{true, false};
struct stu{
    char id[20];
    int testid;
    char name[10];
    char sex[10];
    char tel[20];
    char address[30];
    int test;
    enum bool pay;
} stu;
extern struct stu student[50];
extern int count;
void mainmenu();
enum bool adminmenu();
enum bool stumenu();
enum bool loadfile();
enum bool updatefile();


enum bool input();
enum bool output();
enum bool del();
enum bool search();


enum bool add();
void showinfo();
void testinfo();
enum bool change();
enum bool pay();
enum bool talk();
enum bool infoinput();

