#include<stdio.h>
#define MaxSize 10//����ջ��Ԫ�ص������� 
typedef struct{ 
	int data[MaxSize];//��̬������ջ��Ԫ�� 
	int top;//ջ��ָ�� ָ��ջ��Ԫ�� �����±� ��0��ʼ 
}SqStack;
//��ʼ��ջ
void InitStack(SqStack *S){
	S->top=-1;//��ʼ��ջ��ָ��  ָ��ǰλ�� 
}
void InitStack_(SqStack *S){
	S->top=0;//��ʼ��ջ��ָ��  ָ����һ����Ҫ�����λ�� 
}

//�ж�ջ��
bool StackEmpty(SqStack *S){
	if(S->top==-1)//ջ��
		return true;
	else//���� 
		return false; 
}

//��Ԫ����ջ
bool Push(SqStack *s,int x){
	if(S->top==MaxSize-1)
		return false;
	S->data[++S->top]=x;//ָ���ȼ�һ ��Ԫ����ջ 
	return true; 
}
//��Ԫ����ջ
bool Push_(SqStack *s,int x){
	if(S->top==MaxSize-1)
		return false;
	S->data[S->top++]=x;//ָ���ȼ�һ ��Ԫ����ջ 
	return true; 
}
//��ջ����
bool Pop(SqStack *S,int *x){
	if(S->top==-1)//ջ�� ����
		return false;
	*x=S->data[S->top];//ջ��Ԫ���ȳ�ջ 
	S->top=S->top-1; //ָ���ټ�1 ���ݻ��������ڴ��У�ֻ���߼��ϱ�ɾ����
	return true; 
}
//��ջ����
bool Pop(SqStack *S,int *x){
	if(S->top==-1)//ջ�� ����
		return false;
	*x=S->data[S->top--]; //ջ��Ԫ���ȳ�ջ ָ���ټ�1 ���ݻ��������ڴ��У�ֻ���߼��ϱ�ɾ����
	return true; 
}
//��ջ����
bool Pop_(SqStack *S,int *x){
	if(S->top==-1)//ջ�� ����
		return false;
	*x=S->data[--S->top]; //ջ��Ԫ���ȳ�ջ ָ���ټ�1 ���ݻ��������ڴ��У�ֻ���߼��ϱ�ɾ����
	return true; 
}
//��ջ��Ԫ�� 
bool GetTop(SqStack S,int *x){
	if(S->top==-1)//ջ�� ����
		return false;
	*x=S->data[S->top];//X��¼ջ��Ԫ�� 
	return true; 
}  
int main()
{

	return 0;
 }

