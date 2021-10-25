#include<stdio.h>
#define MaxSize 10//���������Ԫ�ص������� 
typedef struct{
	int data[MaxSize];//�þ�̬�����Ŷ���Ԫ�� 
	int front,rear;//��ͷָ��Ͷ�βָ�� 
}Queue;
typedef struct{ 
	int data[MaxSize];//��̬������ջ��Ԫ�� 
	int top;//ջ��ָ�� ָ��ջ��Ԫ�� �����±� ��0��ʼ 
}Stack;
bool QueueEmpty(Queue Q){
	if(Q.rear==Q.front)//�ӿ�����
		return true;
	else
		return false; 
}
void InitQueue(Queue &Q){
	//��ʼʱ��ͷ��βָ��ָ��0
	Q.front=Q.rear=0; 
}
bool EnQueue(Queue &Q,int x){
	if((Q.rear+1)%MaxSize==Q.front)
		return false;//�����򱨴�
	Q.data[Q.rear]=x;//rearָ����ǽ�Ҫ�����λ�� ��x�����β
	Q.rear=(Q.rear+1)%MaxSize;//��βָ����ƶ�
	return true;	 
}
bool DeQueue(Queue &Q,int &x){
	if(Q.rear==Q.front)
		return false; //�ӿ��򱨴�
	x=Q.data[Q.front];
	Q.front=(Q.front+1)%MaxSize;
	return true;
}
bool DeQueue_(Queue &Q,int &x){
	if(Q.rear==Q.front)
		return false; //�ӿ��򱨴�
	x=Q.data[Q.front];
	Q.front=(Q.front+1)%MaxSize;
	printf("%d\n",x);
	return true;
}
bool StackEmpty(Stack S){
	if(S.top==-1)//ջ��
		return true;
	else//���� 
		return false; 
}
void InitStack(Stack &S){
	S.top=-1;//��ʼ��ջ��ָ��  ָ��ǰλ�� 
}
bool Push(Stack &S,int x){
	if(S.top==MaxSize-1)
		return false;
	S.data[++S.top]=x;//ָ���ȼ�һ ��Ԫ����ջ 
	return true; 
}
bool Pop(Stack &S,int &x){
	if(S.top==-1)//ջ�� ����
		return false;
	x=S.data[S.top];//ջ��Ԫ���ȳ�ջ 
	S.top=S.top-1; //ָ���ټ�1 ���ݻ��������ڴ��У�ֻ���߼��ϱ�ɾ����
	return true; 
}
void Inverser(Stack &S,Queue &Q){
	//���㷨ʵ�ֽ������е�Ԫ������
		int x=0;
	while(!QueueEmpty(Q)){
		DeQueue(Q,x);//������ȫ��Ԫ�����γ��� 
		Push(S,x);//Ԫ��������ջ 
	}
	while(!StackEmpty(S)){
		Pop(S,x);//ջ��ȫ��Ԫ�����γ�ջ 
		EnQueue(Q,x);//�����
		DeQueue_(Q,x);
	} 
}
int main()
{
	Queue Q;
	InitQueue(Q);
	Stack S;
	InitStack(S);
	int i=0;
	for(i=0;i<6;i++){
		EnQueue(Q,i);
	}
	Inverser(S,Q);
	return 0;
 }

