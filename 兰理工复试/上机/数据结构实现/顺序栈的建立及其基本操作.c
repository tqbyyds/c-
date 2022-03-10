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
int StackEmpty(SqStack S){
	if(S.top==-1)//ջ��
		return 1;
	else//���� 
		return 0; 
}
//�ж�ջ��
int StackEmpty_(SqStack S){
	if(S.top==0)//ջ��
		return 1;
	else//���� 
		return 0; 
}

//��Ԫ����ջ
int Push(SqStack *S,int x){
	if(S->top==MaxSize-1)
		return 0;
	S->data[++S->top]=x;//ָ���ȼ�һ ��Ԫ����ջ 
	return 1; 
}
//��Ԫ����ջ
int Push_(SqStack *S,int x){
	if(S->top==MaxSize-1)
		return 0;
	S->data[S->top++]=x;//ָ����һ ��Ԫ����ջ 
	return 1; 
}
//��ջ����
int Pop(SqStack *S,int *x){
	if(S->top==-1)//ջ�� ����
		return 0;
	*x=S->data[S->top];//ջ��Ԫ���ȳ�ջ 
	S->top=S->top-1; //ָ���ټ�1 ���ݻ��������ڴ��У�ֻ���߼��ϱ�ɾ����
	return 1; 
}
//��ջ����
int Pop_(SqStack *S,int *x){
	if(S->top==-1)//ջ�� ����
		return 0;
	*x=S->data[--S->top]; //ջ��Ԫ���ȳ�ջ ָ���ټ�1 ���ݻ��������ڴ��У�ֻ���߼��ϱ�ɾ����
	return 1; 
}
//��ջ��Ԫ�� 
int GetTop(SqStack S,int *x){
	if(S.top==-1)//ջ�� ����
		return 0;
	*x=S.data[S.top];//X��¼ջ��Ԫ�� 
	return 1; 
}
//��ջ��Ԫ�� 
int GetTop_(SqStack S,int *x){
	if(S.top==0)//ջ�� ����
		return 0;
	*x=S.data[--S.top];//X��¼ջ��Ԫ�� 
	return 1; 
}    
int main()
{
/*	SqStack s;
	InitStack(&s);
	printf("%d\n",StackEmpty(s));
	Push(&s,1);
	Push(&s,2);
	Push(&s,3);
	Push(&s,4);
	Push(&s,5);
	Push(&s,6);
	Push(&s,7);
	Push(&s,8);
	printf("%d\n",StackEmpty(s));
	int x=0;
	Pop(&s,&x);
	printf("%d\n",x);
	Pop(&s,&x);
	printf("%d\n",x);
	GetTop(s,&x);
	printf("%d\n",x);*/
	SqStack s;
	InitStack_(&s);
	printf("%d\n",StackEmpty_(s));
	Push_(&s,1);
	Push_(&s,2);
	Push_(&s,3);
	Push_(&s,4);
	Push_(&s,5);
	Push_(&s,6);
	Push_(&s,7);
	Push_(&s,8);
	printf("%d\n",StackEmpty_(s));
	int x=0;
	Pop_(&s,&x);
	printf("%d\n",x);
	Pop_(&s,&x);
	printf("%d\n",x);
	GetTop_(s,&x);
	printf("%d\n",x);
	return 0;
 }
 //1 0 8 7 6
  

