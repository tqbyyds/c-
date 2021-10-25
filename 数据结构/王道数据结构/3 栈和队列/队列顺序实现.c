#include<stdio.h>
#define MaxSize 10//定义队列中元素的最大个数 
typedef struct{
	int data[MaxSize];//用静态数组存放队列元素 
	int front,rear;//队头指针和队尾指针 
}SqQueue;
void InitQueue(SqQueue *Q){
	//初始时队头队尾指针指向0
	Q->front=Q->rear=0; 
}
//判断队列是否为空
bool QueueEmpty(SqQueue Q){
	if(Q.rear==Q.front)//队空条件
		return true;
	else
		return false; 
}
//入队操作 
bool EnQueue(SqQueue *Q,int x){
	if((Q.rear+1)%MaxSize==Q.front)
		return false;//队满则报错
	Q->data[Q->rear]=X;//rear指向的是将要插入的位置 将x插入队尾
	Q->rear=Q.rear+1;//队尾指针后移动
	return true;	 
}
bool EnQueue_(SqQueue *Q,int x){//循环队列入队 
	if((Q.rear+1)%MaxSize==Q.front)  
		return false;//队满则报错
	Q->data[Q->rear]=X;//rear指向的是将要插入的位置 将x插入队尾
	Q->rear=(Q.rear+1)%MaxSize;//队尾指针加一取模 用模运将存储空间在逻辑上变成了环状 
	return true;	           //队列已满的条件 队尾指针的再下一个位置是队头
	                           //即（Q.rear+1)%MaxSize==Q.front 代价牺牲一个存储单元 
}
//循环队列出列
bool DeQueue(SqQueue *Q,int *x){
	if(Q->rear==Q->front)
		return false; //队空则报错
	x=Q->data[Q->front];
	Q->front=(Q->front+1)%MaxSize 
	return true;
}
//获得队头元素的值 用x返回
bool GetHead(SqQueue Q,int *x){
	if(Q->rear==Q->front)
		return false; //队空则报错
	x=Q->data[Q->front];
	return true;		
}  
int main()
{

	return 0;
 }

