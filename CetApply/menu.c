#include "cetheader.h"


void mainmenu(){
    printf("+--------------------------------------+\n");
    printf("+        1.����ѧ����                    +\n");
    printf("+        2.�������Ա��                  +\n");
    printf("+        3.�˳�                         +\n");
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
            printf("�Ƿ�����!\n");
    }
}

enum bool stumenu(){
    getchar();
    printf("+--------------------------------------+\n");
    printf("+        1.¼�������Ϣ                  +\n");
    printf("+        2.�鿴������Ϣ                  +\n");
    printf("+        3.�鿴������Ϣ                  +\n");
    printf("+        4.����                         +\n");
    printf("+        5.�޸ı�����Ϣ                  +\n");
    printf("+        6.���ɿ��Է�                    +\n");
    printf("+        7.ת���˹��ͷ�                  +\n");
    printf("+        8.�˳�                         +\n");
    printf("+--------------------------------------+\n");

    switch ((char) getchar()) {
        case '1':
            if (infoinput() == true)
                printf("\n������Ϣ¼��ɹ�!\n");
            else
                printf("\n������Ϣ¼��ʧ�ܣ����ܺ��зǷ�����!\n");
            return true;
        case '2':
            testinfo();
            return true;
        case '3':
            showinfo();
            return true;
        case '4':
            if (add() == true)
                printf("\n���������ѵݽ�!\n");
            else
                printf("\n��������ݽ�ʧ�ܣ����ܺ��зǷ�����!\n");
            return true;
        case '5':
            if (change() == true)
                printf("\n�޸������ѵݽ�!\n");
            else
                printf("\n�޸�����ݽ�ʧ�ܣ����ܺ��зǷ�����!\n");
            return true;
        case '6':
            if (pay() == true)
                printf("\n�ɷ������ѵݽ�!\n");
            else
                printf("\n�ɷ�����ݽ�ʧ��!\n");
            return true;
        case '7':
            talk();
            break;
        case '8':
            return false;
        default:
            printf("�Ƿ�����!\n");
            return true;
    }

}

enum bool adminmenu(){
    getchar();
    printf("+--------------------------------------+\n");
    printf("+        1.����¼�뿼����Ϣ               +\n");
    printf("+        2.�鿴��������                  +\n");
    printf("+        3.ɾ��������Ϣ                  +\n");
    printf("+        4.����������Ϣ                  +\n");
    printf("+        5.�˳�                         +\n");
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
            printf("�Ƿ�����!\n");
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