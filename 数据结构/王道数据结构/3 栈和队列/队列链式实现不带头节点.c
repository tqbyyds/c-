#include<stdio.h>
typedef struct LinkNode{//��ʽ���нڵ� 
	int data;
	struct LinkNode *next;
}LinkNode;
typedef struct{//��ʽ���� 
	LinkNode *front,*rear;//���еĶ�ͷ�Ͷ�βָ�� 
}LinkQueue;
void InitQueue(LinkQueue *Q){
	//��ʼ��ʱ front rear ��ָ��NULL
	Q->front=NULL;
	Q->rear=NULL; 
}
//�ж϶����Ƿ�Ϊ�� 
bool IsEmpty(LinkQueue Q){
	if(Q.front==NULL)
		return true;
	else
		return false; 
}
//��Ԫ�����
void EnQueue(LinkQueue *Q,int x){
	LinkNode *s=(LinkNode *)malloc(sizeof(LinkNode));
	s->data=x;
	s->next=NULL;
	//����ͷ���Ķ��У���һ��Ԫ�����ʱ��Ҫ�ر��� 
	if(Q->front==NULL){//�ڿն����в����һ��Ԫ�� 
		Q->front==S;//�޸Ķ�β��ͷָ�� 
		Q->rear==S;
	}
	else{
		Q->rear->next=s;
		Q->rear=S; 
	} 
	Q->rear->next=s;//�½ڵ���뵽rear֮��
	Q->rear=s;//�޸�rearָ�� 
}
//����
bool DeQueue(LinkQueue *Q,int *x){
	if(Q->front==NULL)
		return false;//�ն�
	LinkNode *p=Q->front;//Pָ��˴γ��ӵĽ�� 
	x=p->data;//�ñ���x���ض�ͷԪ�� 
	Q->front=p->next;//�޸�frontָ�� 
	if(Q->rear==p){//�˴������һ��������
		Q->rear=NULL;//frontָ��NULL
		Q->rear=NULL//rearָ��NULL
	}
	free(p);//�ͷŽ��ռ�
	return true;  		 
} 
int main()
{

	return 0;
 }

