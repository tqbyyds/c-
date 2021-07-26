#include<stdio.h>
typedef struct LinkNode{//��ʽ���нڵ� 
	int data;
	struct LinkNode *next;
}LinkNode;
typedef struct{//��ʽ���� 
	LinkNode *front,*rear;//���еĶ�ͷ�Ͷ�βָ�� 
}LinkQueue;
void InitQueue(LinkQueue *Q){
	//��ʼ��ʱ front rear ��ָ��ͷ���
	Q->front=Q->rear=(LinkNode *)malloc(sizeof(LinkNode));
	Q->front->next=NULL; 
}
//�ж϶����Ƿ�Ϊ�� 
bool IsEmpty(LinkQueue Q){
	if(Q.front==Q.rear)
		return true;
	else
		return false; 
}
//��Ԫ�����
void EnQueue(LinkQueue *Q,int x){
	LinkNode *s=(LinkNode *)malloc(sizeof(LinkNode));
	s->data=x;
	s->next=NULL;
	Q.rear->next=s;//�½ڵ���뵽rear֮��
	Q.rear=s;//�޸ı�βָ�� 
}
//����
bool DeQueue(LinkQueue *Q,int *x){
	if(Q->front==Q->rear)
		return false;//�ն�
	LinkNode *p=Q->front->next;
	x=p->data;
	Q->front->next=p->next;//�޸�ͷ�ڵ��nextָ��
	if(Q->rear==p)//�˴������һ��������
		Q->rear=Q->front;//�޸�rearָ��
	free(p);//�ͷŽ��ռ�
	return true;  
		 
} 
 
int main()
{

	return 0;
 }

