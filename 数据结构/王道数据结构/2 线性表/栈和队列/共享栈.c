#include<stdio.h>
#define MaxSize 10//����ջ��Ԫ�ص������� 
typedef struct{ 
	int data[MaxSize];//��̬������ջ��Ԫ�� 
	int top0;//0��ջջ��ָ�� 
	int top1;//1��ջջ��ָ�� 
}ShqStack;
void InitStack(ShStack *S){
	S->top0=-1;//��ʼ��ջ��ָ��  ջ����������top0+1===top1 
	S->top1=MaxSize;
}
int main()
{

	return 0;
 }

