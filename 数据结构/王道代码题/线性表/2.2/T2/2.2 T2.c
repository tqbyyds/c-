#include<stdio.h>
#define MaxSize 50//�������Ա����󳤶� 
typedef struct{
	int data [MaxSize];//˳����Ԫ��  
	int length;//˳���ǰ�ĳ��� 
} Sqlist;//˳�������Ͷ���
//����������ʼ��һ��˳��� 
void InitList(Sqlist *L){
	int i=0; 
	for(i=0;i<MaxSize;i++); //����������Ԫ������ΪĬ�ϳ�ʼֵ 
		L->data[i]=0;
	L->length=0;//˳����ʼ����Ϊ0 
}
void Reverse(Sqlist *L){
	int temp;
	int i=0;
	for(i=0;i<L->length/2;i++){
		temp=L->data[i];
		L->data[i]=L->data[L->length-i-1];
		L->data[L->length-i-1]=temp;
	} 
}
int main()
{
	Sqlist L;
	InitList(&L);
	int i=0;
	for(i=0;i<MaxSize;i++){
		L.data[i]=i;
		L.length++; 
	}
	Reverse(&L);
	for(int i=0;i<MaxSize;i++){
		printf("%d\n",L.data[i]);
	}
	return 0;
 }


