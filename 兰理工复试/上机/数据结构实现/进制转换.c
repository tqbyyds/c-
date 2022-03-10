#include<stdio.h>
#define MaxSize 10//����ջ��Ԫ�ص������� 
typedef struct{ 
	int data[MaxSize];//��̬������ջ��Ԫ�� 
	int top;//ջ��ָ�� ָ��ջ��Ԫ�� �����±� ��0��ʼ 
}SqStack;
int StackEmpty(SqStack S){
	if(S.top==-1)//ջ��
		return 1;
	else//���� 
		return 0; 
}
//��ʼ��ջ
void InitStack(SqStack *S){
	S->top=-1;//��ʼ��ջ��ָ��  ָ��ǰλ�� 
}
//��Ԫ����ջ
int Push(SqStack *S,int x){
	if(S->top==MaxSize-1)
		return 0;
	S->data[++S->top]=x;//ָ���ȼ�һ ��Ԫ����ջ 
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

//��ջ��Ԫ�� 
int GetTop(SqStack S,int *x){
	if(S.top==-1)//ջ�� ����
		return 0;
	*x=S.data[S.top];//X��¼ջ��Ԫ�� 
	return 1; 
}

int main()
{
	int x,i;
	printf("������ʮ������");
	scanf("%d",&x);
	printf("������Ҫת���Ľ���"); 
	scanf("%d",&i);
	SqStack s;
	InitStack(&s);
	while(x){
		Push(&s,x%i);
		x=x/i;
	}
	while(!StackEmpty(s)){
		Pop(&s,&x);
		printf("%d",x);
	}
	return 0;
 }
  
