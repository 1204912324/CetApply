//#include "cetheader.h"
#include <stdio.h>
#include <string.h>
struct stu{

    char id[20];

    char name[10];

    char sex[10];

    char tel[20];

    char address[30];

    int test;

    int pay;

} stu;
struct stu student[50];

int num=0;

void testinfo();
void infoinput();
void showinfo();
void pay();
void change();
int searchid();
int main(){
	infoinput();
	change();
	showinfo();
}

void pay(){
	int i,count1=0;
	char Pid[20];
	printf("�������������֤�ţ�"); 
	scanf("%s",&Pid);
	for(i=0;i<50;i++){
		if(strcmp(student[i].id,Pid)==0){
			count1++;
		}
	}
	int P_num=180*count1;
	printf("��ǰ��WWW.wwd.com֧��%dԪ",P_num);
	printf("�Ƿ��ѽɷ���ɣ�y/n\n");
	char flag,flag1=0;
	getchar();
	scanf("%c",&flag);
    do{
    if(flag=='y'){
		printf("��̨�����У�ף��ȡ�úóɼ���\n");
		flag1=1;
	}else {
	printf("�뼰ʱ�ɷѣ�\n");
	printf("�Ƿ��ѽɷ���ɣ�y/n");
	getchar();
	scanf("%c",&flag); 
	}
	}
	while(flag1!=1);
}
 void infoinput(){
 	printf("��¼�����ĸ�����Ϣ\n");
	printf("���֤��:");
	scanf("%s",&student[num].id);
	printf("����:");
	scanf("%s",&student[num].name);
	printf("�Ա�");
	scanf("%s",&student[num].sex);
	char itel[20];
	int flag=0;
	do{
	printf("�绰:");
	scanf("%s",&itel);
	if(strlen(itel)==11){
	        strcpy(student[num].tel,itel);
	        flag=1;
			}else printf("�绰�����Ϲ涨���������룡\n");
	}while(flag!=1);
	printf("סַ:");
	scanf("%s",&student[num].address);
	 num++;
	
}
void testinfo(){    
    printf("                    ���Կ�����Ϣ                      \n");
	printf("******************************************************\n");
	printf("*   ��ѧ¥   * ���� *     ʱ��     *  ����  *�������*\n");
	printf("******************************************************\n");
	printf("*   ��֪¥   * 101  *2021/4/1 8:00 *Ӣ���ļ�*  ����1 *\n");
	printf("*   ��֪¥   * 102  *2021/4/1 8:00 *Ӣ���ļ�*  ����2 *\n");
	printf("*   ��֪¥   * 103  *2021/4/1 8:00 *Ӣ���ļ�*  ����3 *\n");
	printf("*   ��֪¥   * 104  *2021/4/1 8:00 *Ӣ���ļ�*  ����4 *\n");
    printf("******************************************************\n");
	printf("*   ��֪¥   * 105  *2021/4/1 14:00*Ӣ������*  ����5 *\n");
	printf("*   ��֪¥   * 106  *2021/4/1 14:00*Ӣ������*  ����6 *\n");
	printf("*   ��֪¥   * 107  *2021/4/1 14:00*Ӣ������*  ����7 *\n");
	printf("*   ��֪¥   * 108  *2021/4/1 14:00*Ӣ������*  ����8 *\n");
	printf("******************************************************\n"); 

}
void showinfo(){
	char Sid[20];
	int i;
	printf("���������֤�ţ�");
	scanf("%s",&Sid);
	for(i=0;i<50;i++){
		if(strcmp(student[i].id,Sid)==0){
			printf("���֤��:%s",student[i].id);	
			printf("����:%s",student[i].name);
			printf("�Ա�:%s",student[i].sex);
	        printf("�绰:%s",student[i].tel);
	        printf("סַ:%s",student[i].address);
	        printf("����:%d\n",student[i].test);


		}
	}
}

void talk(){
	int a;
	printf("��������������Щ���⣿\n");
	printf("1.�������ɹ���\n2.�޷�¼����Ϣ��\n3.�ɷ�ʧ�ܡ�\n4.ת���˹��ͷ���\n");
	scanf("%d",&a);
	if(a<4&&a>0){
		printf("��л���ķ�������̨����ʱ����\n");
	} else if(a==4){
		printf("��̨����ת���˹��ͷ������Եȡ�\n");
	}else printf("�����淴����");
}
int searchid(){
	char Cid[20];int i;
	printf("�������������֤�ţ�\n");
	scanf("%s",&Cid);
	for(i=0;i<50;i++){
		if(strcmp(student[i].id,Cid)==0){
			break;
		}else {
			printf("�������֤�Ų���ȷ��");
		}
	}
	return i;
}
void change(){
	int i;
	i=searchid();
	printf("��ѡ����Ҫ�޸ĵ���Ϣ��\n");
	printf("1.����\n");
	printf("2.�Ա�\n");
	printf("3.�绰\n");
	printf("4.סַ\n");
	printf("5.������һ��\n");
	getchar();
	int c;
	scanf("%d",&c);
	switch(c){
		case 1:{
			char Cname[10];
		    printf("��Ҫ����������Ϊ��\n");
		    scanf("%s",&Cname);
		    strcpy(student[i].name,Cname);
		    printf("��̨�����У����Ժ�ˢ�¡�\n");
		    break;}
		case 2:{
			char Csex[10];
			printf("��Ҫ���Ա����Ϊ��\n");
			scanf("%s",&Csex);
			strcpy(student[i].sex,Csex);
			printf("��̨�����У����Ժ�ˢ�¡�\n");
			break;}
		case 3:{
			char Ctel[20];
			printf("��Ҫ���绰����Ϊ��\n");
			scanf("%s",&Ctel);
			if(strlen(Ctel)==11){
	        strcpy(student[i].tel,Ctel);
		    printf("��̨�����У����Ժ�ˢ�¡�\n");
			}else printf("�绰���벻���Ϲ涨���������޸ġ�\n");
		    break;}
		case 4:{
			char Cadd[30];
			printf("��Ҫ��סַ����Ϊ��\n");
			scanf("%s",&Cadd);
			strcpy(student[i].address,Cadd);
		    printf("��̨�����У����Ժ�ˢ�¡�\n");
		    break;}
		case 5:{
			
			break;
		}
		default :{
			printf("��ѡ����ȷ���޸��\n");
			change();
		}
	}
}

