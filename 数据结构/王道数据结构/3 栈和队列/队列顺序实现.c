#include<stdio.h>
#define MaxSize 10//���������Ԫ�ص������� 
typedef struct{
	int data[MaxSize];//�þ�̬�����Ŷ���Ԫ�� 
	int front,rear;//��ͷָ��Ͷ�βָ�� 
}SqQueue;
void InitQueue(SqQueue *Q){
	//��ʼʱ��ͷ��βָ��ָ��0
	Q->front=Q->rear=0; 
}
//�ж϶����Ƿ�Ϊ��
bool QueueEmpty(SqQueue Q){
	if(Q.rear==Q.front)//�ӿ�����
		return true;
	else
		return false; 
}
//��Ӳ��� 
bool EnQueue(SqQueue *Q,int x){
	if((Q.rear+1)%MaxSize==Q.front)
		return false;//�����򱨴�
	Q->data[Q->rear]=X;//rearָ����ǽ�Ҫ�����λ�� ��x�����β
	Q->rear=Q.rear+1;//��βָ����ƶ�
	return true;	 
}
bool EnQueue_(SqQueue *Q,int x){//ѭ��������� 
	if((Q.rear+1)%MaxSize==Q.front)  
		return false;//�����򱨴�
	Q->data[Q->rear]=X;//rearָ����ǽ�Ҫ�����λ�� ��x�����β
	Q->rear=(Q.rear+1)%MaxSize;//��βָ���һȡģ ��ģ�˽��洢�ռ����߼��ϱ���˻�״ 
	return true;	           //�������������� ��βָ�������һ��λ���Ƕ�ͷ
	                           //����Q.rear+1)%MaxSize==Q.front ��������һ���洢��Ԫ 
}
//ѭ�����г���
bool DeQueue(SqQueue *Q,int *x){
	if(Q->rear==Q->front)
		return false; //�ӿ��򱨴�
	x=Q->data[Q->front];
	Q->front=(Q->front+1)%MaxSize 
	return true;
}
//��ö�ͷԪ�ص�ֵ ��x����
bool GetHead(SqQueue Q,int *x){
	if(Q->rear==Q->front)
		return false; //�ӿ��򱨴�
	x=Q->data[Q->front];
	return true;		
}  
int main()
{

	return 0;
 }

