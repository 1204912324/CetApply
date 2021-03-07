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
            printf("\n�Ƿ�����!\n");
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
            printf("\n�Ƿ�����!\n");
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
                printf("\n¼��ɹ�!\n");
            else
                printf("\nĳ��¼��ʧ�ܣ����ܺ��зǷ�����!\n");
            return true;
        case '2':
            output();
            return true;
        case '3':
            if (del() == true)
                printf("\n������Ϣɾ���ɹ�!\n");
            else
                printf("\nδ֪����ɾ��ʧ��!\n");
            return true;
        case '4':
            search();
            return true;
        case '5':
            return false;
        default:
            printf("\n�Ƿ�����!\n");
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
        printf("\n�����뿼�����!\n");
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
            printf("\n�Ƿ�����!\n");
    } else{
        printf("\n����¼�뿼����Ϣ!\n");
        if (infoinput() == true){
            printf("\n������Ϣ¼��ɹ�!\n");
            add();
        }
        else{
            printf("\n������Ϣ¼��ʧ�ܣ����ܺ��зǷ�����!\n");
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