#include<stdio.h>
#define MaxSize 50//�������Ա����󳤶� 
typedef struct{
	int data [MaxSize];//˳����Ԫ��  
	int length;//˳���ǰ�ĳ��� 
} Sqlist;//˳�������Ͷ���
void InitList(Sqlist *L){
	int i=0;
	for(i=0;i<MaxSize;i++); //����������Ԫ������ΪĬ�ϳ�ʼֵ 
		L->data[i]=0;
	L->length=0;//˳����ʼ����Ϊ0 
}
int Del_s_t2(Sqlist *L,int  s,int  t){
//ɾ������˳���L��ֵ�ڸ���ֵs��t֮�������Ԫ��
	int i,j;
	if(s>=t||L->length==0)
		return 0;
	for(i=0;i<L->length&&L->data[i]<s;i++);//Ѱ��ֵ���ڵ���s�ĵ�һ��Ԫ�� 
	if(i>=L->length)
		return 0;//����Ԫ��ֵ��С��s,����
	for(j=i;j<L->length&&L->data[j]<=t;j++);//Ѱ��ֵ����t�ĵ�һ��Ԫ��
	for(;j<L->length;i++,j++)
		L->data[i]=L->data[j];
	L->length=i;
	return 1;		
} 
int main()
{
	Sqlist L;
	InitList(&L);
	int i=0;
	for(i=0;i<=10;i++){
		L.data[i]=i;
		L.length++;
	}
	
	Del_s_t2(&L,3,8);
	for(i=0;i<L.length;i++){
		printf("%d\n",L.data[i]);
	}
	printf("*%d*",L.length);
	return 0;
 }

