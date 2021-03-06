#include <stdio.h>
#include <stdlib.h>
#include "cetheader.h"
struct stu student[50];
int count = 0;
int main() {
//    mainmenu();
    loadfile();
    printf("%s %d %s %s %s %s %d %s", student[0].id, student[0].testid, student[0].name, student[0].sex, student[0].tel, student[0].address, student[0].test, student[0].pay == true?"true":"false");
}
