#include "cetheader.h"


enum bool input() { //����¼�뿼����Ϣ
	int i=0,operationnum=0;
	loadfile();

	printf("������Ҫ¼��Ŀ�������\n");
	scanf("%d",&operationnum);

	for(; i<operationnum; i++) {
		printf("������¼�뿼������Ϣ��\n");
		scanf("%s %d %s %s %s %s %d %s\n", student[count+i+1].id, &student[count+i+1].testid, student[count+i+1].name, student[count+i+1].sex, student[count+i+1].tel, student[count+i+1].address, &student[count+i+1].test, student[count+i+1].pay);
	}
	count=count+operationnum;
	updatefile();
	return true;
}
enum bool output() { //�鿴��������
	loadfile();
	int i=0;
	for(; i<count; ++i) {
		printf("%s %d %s %s %s %s %d %s\n", student[i].id, student[i].testid, student[i].name, student[i].sex, student[i].tel, student[i].address, student[i].test, student[i].pay);
	}
	return true;
}
enum bool del() { //ɾ��������Ϣ
	int i=0,flag=0;
	char TemporaryFlag[20];
	loadfile();
	printf("������Ҫɾ���Ŀ��������֤�ţ�\n");
	scanf("%s",TemporaryFlag);
	for(; i<count; i++) {
		if(strcmp(student[i].id, TemporaryFlag)==0)
			flag++;
	}
	if(flag!=0) {
		for(; i<count; i++) {
			strcpy(student[i].id,student[i+1].id);
			student[i].testid=student[i+1].testid;
			strcpy(student[i].name,student[i+1].name);
			strcpy(student[i].sex,student[i+1].sex);
			strcpy(student[i].tel,student[i+1].tel);
			strcpy(student[i].address,student[i+1].address);
			student[i].test=student[i+1].test;
			student[i].pay=student[i+1].pay;
		}
		count--;
	} else return false;
	updatefile();
	return true;
}
enum bool search() { //����������Ϣ
	int i=0,flag=0;
	char TemporaryFlag[20];
	loadfile();
	printf("������Ҫ�����Ŀ��������֤�ţ�\n");
	scanf("%s",TemporaryFlag);
	for(; i<count; i++) {
		if(strcmp(student[i].id, TemporaryFlag)==0) {
			flag=i;
			break;
		}
	}
	if(flag!=0) {
		printf("%s %d %s %s %s %s %d %s\n", student[flag].id, student[flag].testid, student[flag].name, student[flag].sex, student[flag].tel, student[flag].address, student[flag].test, student[flag].pay);
	} else return false;
	updatefile();
	return true;
}
