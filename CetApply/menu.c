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
            if (input() == true)
                printf("¼��ɹ�!\n");
            else
                printf("ĳ��¼��ʧ�ܣ����ܺ��зǷ�����!\n");
            return true;
        case '2':
            output();
            return true;
        case '3':
            if (del() == true)
                printf("������Ϣɾ���ɹ�!\n");
            else
                printf("δ֪����ɾ��ʧ��!\n");
            return true;
        case '4':
            search();
            return true;
        case '5':
            return false;
        default:
            printf("�Ƿ�����!\n");
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
        fscanf(fp, "%s %d %s %s %s %s %d %s", student[i].id, &student[i].testid, student[i].name, student[i].sex, student[i].tel, student[i].address, &student[i].test, a);
        student[i].pay = a == "true"? true:false;
    }
    if (i > count)
        count = i;
    fclose(fp);
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