#include "cetheader.h"


void mainmenu(){
    printf("+--------------------------------------+\n");
    printf("+        1.进入学生端                    +\n");
    printf("+        2.进入管理员端                  +\n");
    printf("+        3.退出                         +\n");
    printf("+--------------------------------------+\n");

    switch ((char) getchar()) {
        case '1':
            while (stumenu() == true);
            break;
        case '2':
            while (adminmenu() == true);
            break;
        case '3':
            return;
        default:
            printf("\n非法输入!\n");
    }
}

enum bool stumenu(){
    getchar();
    printf("+--------------------------------------+\n");
    printf("+        1.录入个人信息                  +\n");
    printf("+        2.查看考试信息                  +\n");
    printf("+        3.查看个人信息                  +\n");
    printf("+        4.报名                         +\n");
    printf("+        5.修改报名信息                  +\n");
    printf("+        6.缴纳考试费                    +\n");
    printf("+        7.转接人工客服                  +\n");
    printf("+        8.退出                         +\n");
    printf("+--------------------------------------+\n");

    switch ((char) getchar()) {
        case '1':
            if (infoinput() == true)
                printf("\n个人信息录入成功!\n");
            else
                printf("\n个人信息录入失败，可能含有非法输入!\n");
            return true;
        case '2':
            testinfo();
            return true;
        case '3':
            showinfo();
            return true;
        case '4':
            if (add() == true)
                printf("\n报名申请已递交!\n");
            else
                printf("\n报名申请递交失败，可能含有非法输入!\n");
            return true;
        case '5':
            if (change() == true)
                printf("\n修改申请已递交!\n");
            else
                printf("\n修改申请递交失败，可能含有非法输入!\n");
            return true;
        case '6':
            if (pay() == true)
                printf("\n缴费申请已递交!\n");
            else
                printf("\n缴费申请递交失败!\n");
            return true;
        case '7':
            talk();
            break;
        case '8':
            return false;
        default:
            printf("\n非法输入!\n");
            return true;
    }

}

enum bool adminmenu(){
    getchar();
    printf("+--------------------------------------+\n");
    printf("+        1.批量录入考生信息               +\n");
    printf("+        2.查看考生名单                  +\n");
    printf("+        3.删除考生信息                  +\n");
    printf("+        4.搜索考生信息                  +\n");
    printf("+        5.退出                         +\n");
    printf("+--------------------------------------+\n");

    switch ((char) getchar()) {
        case '1':
            if (input() == true)
                printf("\n录入成功!\n");
            else
                printf("\n某项录入失败，可能含有非法输入!\n");
            return true;
        case '2':
            output();
            return true;
        case '3':
            if (del() == true)
                printf("\n考生信息删除成功!\n");
            else
                printf("\n未知错误，删除失败!\n");
            return true;
        case '4':
            search();
            return true;
        case '5':
            return false;
        default:
            printf("\n非法输入!\n");
            return true;
    }
}
enum bool loadfile(){
    FILE *fp = fopen("stu.txt", "r");
//    fprintf(fp, "1 1 ge nan 1232131 asdada 1 true");
    rewind(fp);
    int i = 0;
    char a[5];
    for (; feof(fp) == 0 ; ++i) {
        fscanf(fp, "%s %d %s %s %s %s %d %s\n", student[i].id, &student[i].testid, student[i].name, student[i].sex, student[i].tel, student[i].address, &student[i].test, a);
        student[i].pay = a == "true"? true:false;
    }
    if (i > count)
        count = i;
    fclose(fp);
    return true;
}
enum bool updatefile(){
    FILE *fp = fopen("stu.txt", "w");
    rewind(fp);
    int i = 0;
    for (; i < count ; ++i) {
        fprintf(fp, "%s %d %s %s %s %s %d %s\n", student[i].id, student[i].testid, student[i].name, student[i].sex, student[i].tel, student[i].address, student[i].test, student[i].pay == true?"true":"false");
    }
    fclose(fp);
    return true;
}


enum bool input(){

}
enum bool output(){

}
enum bool del(){

}
enum bool search(){

}


enum bool add(){

    if (flag_now == true){
        testinfo();
        printf("\n请输入考场编号!\n");
        scanf("%d", &student[count].test);
        if (student[count].test >= 1 && student[count].test <= 4){
            strcpy(student[count].id, nowstudent.id);
            strcpy(student[count].name, nowstudent.name);
            strcpy(student[count].sex, nowstudent.sex);
            strcpy(student[count].tel, nowstudent.tel);
            strcpy(student[count].address, nowstudent.address);
            student[count].testid = student[count].test * 100000 + count;
            student[count].pay = false;
            count++;
        } else if (student[count].test >= 5 && student[count].test <= 8){
            strcpy(student[count].id, nowstudent.id);
            strcpy(student[count].name, nowstudent.name);
            strcpy(student[count].sex, nowstudent.sex);
            strcpy(student[count].tel, nowstudent.tel);
            strcpy(student[count].address, nowstudent.address);
            student[count].testid = student[count].test * 100000 + count;
            student[count].pay = false;
            count++;
        } else
            printf("\n非法输入!\n");
    } else{
        printf("\n请先录入考生信息!\n");
        if (infoinput() == true){
            printf("\n个人信息录入成功!\n");
            add();
        }
        else{
            printf("\n个人信息录入失败，可能含有非法输入!\n");
            return false;
        }
    }
    return true;
}
void showinfo(){

}
void testinfo(){

}
enum bool change(){

    return true;
}
enum bool pay(){

    return true;
}
enum bool talk(){

    return true;
}
enum bool infoinput(){


    return true;
}