#include <stdio.h>
#include <stdlib.h>
enum bool{true, false};
struct stu{
    int id;
    char name[10];
    char sex[10];
    char tel[20];
    char address[30];
    char test[10];
    enum bool pay;
} stu;
extern struct stu student[50];
extern int count;
enum bool mainmenu();
enum bool adminmenu();
enum bool stumenu();
enum bool loadfile();
enum bool updatefile();


enum bool input();
enum bool output();
enum bool del();
enum bool search();


enum bool add();
enum bool change();
enum bool pay();
enum bool talk();
enum bool infoinput();

