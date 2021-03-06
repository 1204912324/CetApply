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
            printf("非法输入!\n");
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
            printf("非法输入!\n");
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
            printf("1");
            break;
        case '2':
            printf("2");
            break;
        case '3':
            printf("3");
            break;
        case '4':
            printf("4");
            break;
        case '5':
            printf("5");
            return false;
        default:
            printf("非法输入!\n");
            return true;
    }
    return true;


}
enum bool loadfile(){

}
enum bool updatefile(){

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