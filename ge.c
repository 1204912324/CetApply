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
	printf("请输入您的身份证号："); 
	scanf("%s",&Pid);
	for(i=0;i<50;i++){
		if(strcmp(student[i].id,Pid)==0){
			count1++;
		}
	}
	int P_num=180*count1;
	printf("请前往WWW.wwd.com支付%d元",P_num);
	printf("是否已缴费完成？y/n\n");
	char flag,flag1=0;
	getchar();
	scanf("%c",&flag);
    do{
    if(flag=='y'){
		printf("后台处理中，祝您取得好成绩！\n");
		flag1=1;
	}else {
	printf("请及时缴费！\n");
	printf("是否已缴费完成？y/n");
	getchar();
	scanf("%c",&flag); 
	}
	}
	while(flag1!=1);
}
 void infoinput(){
 	printf("请录入您的个人信息\n");
	printf("身份证号:");
	scanf("%s",&student[num].id);
	printf("姓名:");
	scanf("%s",&student[num].name);
	printf("性别：");
	scanf("%s",&student[num].sex);
	char itel[20];
	int flag=0;
	do{
	printf("电话:");
	scanf("%s",&itel);
	if(strlen(itel)==11){
	        strcpy(student[num].tel,itel);
	        flag=1;
			}else printf("电话不符合规定请重新输入！\n");
	}while(flag!=1);
	printf("住址:");
	scanf("%s",&student[num].address);
	 num++;
	
}
void testinfo(){    
    printf("                    考试考场信息                      \n");
	printf("******************************************************\n");
	printf("*   教学楼   * 教室 *     时间     *  类型  *考场编号*\n");
	printf("******************************************************\n");
	printf("*   博知楼   * 101  *2021/4/1 8:00 *英语四级*  考场1 *\n");
	printf("*   博知楼   * 102  *2021/4/1 8:00 *英语四级*  考场2 *\n");
	printf("*   博知楼   * 103  *2021/4/1 8:00 *英语四级*  考场3 *\n");
	printf("*   博知楼   * 104  *2021/4/1 8:00 *英语四级*  考场4 *\n");
    printf("******************************************************\n");
	printf("*   博知楼   * 105  *2021/4/1 14:00*英语六级*  考场5 *\n");
	printf("*   博知楼   * 106  *2021/4/1 14:00*英语六级*  考场6 *\n");
	printf("*   博知楼   * 107  *2021/4/1 14:00*英语六级*  考场7 *\n");
	printf("*   博知楼   * 108  *2021/4/1 14:00*英语六级*  考场8 *\n");
	printf("******************************************************\n"); 

}
void showinfo(){
	char Sid[20];
	int i;
	printf("请输入身份证号：");
	scanf("%s",&Sid);
	for(i=0;i<50;i++){
		if(strcmp(student[i].id,Sid)==0){
			printf("身份证号:%s",student[i].id);	
			printf("姓名:%s",student[i].name);
			printf("性别:%s",student[i].sex);
	        printf("电话:%s",student[i].tel);
	        printf("住址:%s",student[i].address);
	        printf("考场:%d\n",student[i].test);


		}
	}
}

void talk(){
	int a;
	printf("请问您遇到了哪些问题？\n");
	printf("1.报名不成功。\n2.无法录入信息。\n3.缴费失败。\n4.转接人工客服。\n");
	scanf("%d",&a);
	if(a<4&&a>0){
		printf("感谢您的反馈，后台将及时处理。\n");
	} else if(a==4){
		printf("后台正在转接人工客服，请稍等。\n");
	}else printf("请认真反馈！");
}
int searchid(){
	char Cid[20];int i;
	printf("请输入您的身份证号：\n");
	scanf("%s",&Cid);
	for(i=0;i<50;i++){
		if(strcmp(student[i].id,Cid)==0){
			break;
		}else {
			printf("您的身份证号不正确！");
		}
	}
	return i;
}
void change(){
	int i;
	i=searchid();
	printf("请选择您要修改的信息：\n");
	printf("1.姓名\n");
	printf("2.性别\n");
	printf("3.电话\n");
	printf("4.住址\n");
	printf("5.返回上一级\n");
	getchar();
	int c;
	scanf("%d",&c);
	switch(c){
		case 1:{
			char Cname[10];
		    printf("您要将姓名更改为：\n");
		    scanf("%s",&Cname);
		    strcpy(student[i].name,Cname);
		    printf("后台处理中，请稍后刷新。\n");
		    break;}
		case 2:{
			char Csex[10];
			printf("您要将性别更改为：\n");
			scanf("%s",&Csex);
			strcpy(student[i].sex,Csex);
			printf("后台处理中，请稍后刷新。\n");
			break;}
		case 3:{
			char Ctel[20];
			printf("您要将电话更改为：\n");
			scanf("%s",&Ctel);
			if(strlen(Ctel)==11){
	        strcpy(student[i].tel,Ctel);
		    printf("后台处理中，请稍后刷新。\n");
			}else printf("电话号码不符合规定，请重新修改。\n");
		    break;}
		case 4:{
			char Cadd[30];
			printf("您要将住址更改为：\n");
			scanf("%s",&Cadd);
			strcpy(student[i].address,Cadd);
		    printf("后台处理中，请稍后刷新。\n");
		    break;}
		case 5:{
			
			break;
		}
		default :{
			printf("请选择正确的修改项！\n");
			change();
		}
	}
}

