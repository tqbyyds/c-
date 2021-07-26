#include<stdio.h>
typedef struct LinkNode{//链式队列节点 
	int data;
	struct LinkNode *next;
}LinkNode;
typedef struct{//链式队列 
	LinkNode *front,*rear;//队列的队头和队尾指针 
}LinkQueue;
void InitQueue(LinkQueue *Q){
	//初始化时 front rear 都指向NULL
	Q->front=NULL;
	Q->rear=NULL; 
}
//判断队列是否为空 
bool IsEmpty(LinkQueue Q){
	if(Q.front==NULL)
		return true;
	else
		return false; 
}
//新元素入队
void EnQueue(LinkQueue *Q,int x){
	LinkNode *s=(LinkNode *)malloc(sizeof(LinkNode));
	s->data=x;
	s->next=NULL;
	//不带头结点的队列，第一个元素入队时需要特别处理 
	if(Q->front==NULL){//在空队列中插入第一个元素 
		Q->front==S;//修改队尾队头指针 
		Q->rear==S;
	}
	else{
		Q->rear->next=s;
		Q->rear=S; 
	} 
	Q->rear->next=s;//新节点插入到rear之后
	Q->rear=s;//修改rear指针 
}
//出队
bool DeQueue(LinkQueue *Q,int *x){
	if(Q->front==NULL)
		return false;//空队
	LinkNode *p=Q->front;//P指向此次出队的结点 
	x=p->data;//用变量x返回队头元素 
	Q->front=p->next;//修改front指针 
	if(Q->rear==p){//此次是最后一个结点出队
		Q->rear=NULL;//front指向NULL
		Q->rear=NULL//rear指向NULL
	}
	free(p);//释放结点空间
	return true;  		 
} 
int main()
{

	return 0;
 }

