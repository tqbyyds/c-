#include<stdio.h>
#define MAXLEN 255 //Ԥ������󴮳�Ϊ255
//��̬����ʵ�� 
typedef struct{
	char ch[MAXLEN];//ÿ�������洢һ���ַ� 
	int length;//����ʵ�ʳ��� 
}SString;
//��̬����ʵ��
typedef struct{
	char *ch;//����������洢����chָ�򴮵Ļ���ַ 
	int length;//���ĳ��� 
}HString;
//��ʼ�� 
HString S;
S.ch=(char *)malloc(MAXLEN*sizeof(char));
S.length=0;
//���Ӵ� ��sub���ص�pos���ַ��𳤶�Ϊlen���ִ� ��̬���� 
bool SubString(SString &Sub,SString S,int pos,int len){
	//�ִ���ΧԽ�� 
	if(pos+len-1>S.length)
		return false;
	for(int i=pos;i<pos+len;i++)
		Sub.ch[i-pos+1]=S.ch[i];
	Sub.length =len;
	return true;
} 
int main()
{

	return 0;
 }

