#include<stdio.h>
typedef struct LinkNode{//链式队列节点 
	int data;
	struct LinkNode *next;
}LinkNode;
typedef struct{//链式队列 
	LinkNode *front,*rear;//队列的队头和队尾指针 
}LinkQueue;
void InitQueue(LinkQueue *Q){
	//初始化时 front rear 都指向头结点
	Q->front=Q->rear=(LinkNode *)malloc(sizeof(LinkNode));
	Q->front->next=NULL; 
}
//判断队列是否为空 
bool IsEmpty(LinkQueue Q){
	if(Q.front==Q.rear)
		return true;
	else
		return false; 
}
//新元素入队
void EnQueue(LinkQueue *Q,int x){
	LinkNode *s=(LinkNode *)malloc(sizeof(LinkNode));
	s->data=x;
	s->next=NULL;
	Q.rear->next=s;//新节点插入到rear之后
	Q.rear=s;//修改表尾指针 
}
//出队
bool DeQueue(LinkQueue *Q,int *x){
	if(Q->front==Q->rear)
		return false;//空队
	LinkNode *p=Q->front->next;
	x=p->data;
	Q->front->next=p->next;//修改头节点的next指针
	if(Q->rear==p)//此次是最后一个结点出队
		Q->rear=Q->front;//修改rear指针
	free(p);//释放结点空间
	return true;  
		 
} 
 
int main()
{

	return 0;
 }

