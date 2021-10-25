#include<stdio.h>
#define MaxSize 10//定义队列中元素的最大个数 
typedef struct{
	int data[MaxSize];//用静态数组存放队列元素 
	int front,rear;//队头指针和队尾指针 
}Queue;
typedef struct{ 
	int data[MaxSize];//静态数组存放栈中元素 
	int top;//栈顶指针 指向栈顶元素 数组下标 从0开始 
}Stack;
bool QueueEmpty(Queue Q){
	if(Q.rear==Q.front)//队空条件
		return true;
	else
		return false; 
}
void InitQueue(Queue &Q){
	//初始时队头队尾指针指向0
	Q.front=Q.rear=0; 
}
bool EnQueue(Queue &Q,int x){
	if((Q.rear+1)%MaxSize==Q.front)
		return false;//队满则报错
	Q.data[Q.rear]=x;//rear指向的是将要插入的位置 将x插入队尾
	Q.rear=(Q.rear+1)%MaxSize;//队尾指针后移动
	return true;	 
}
bool DeQueue(Queue &Q,int &x){
	if(Q.rear==Q.front)
		return false; //队空则报错
	x=Q.data[Q.front];
	Q.front=(Q.front+1)%MaxSize;
	return true;
}
bool DeQueue_(Queue &Q,int &x){
	if(Q.rear==Q.front)
		return false; //队空则报错
	x=Q.data[Q.front];
	Q.front=(Q.front+1)%MaxSize;
	printf("%d\n",x);
	return true;
}
bool StackEmpty(Stack S){
	if(S.top==-1)//栈空
		return true;
	else//不空 
		return false; 
}
void InitStack(Stack &S){
	S.top=-1;//初始化栈顶指针  指向当前位置 
}
bool Push(Stack &S,int x){
	if(S.top==MaxSize-1)
		return false;
	S.data[++S.top]=x;//指针先加一 新元素入栈 
	return true; 
}
bool Pop(Stack &S,int &x){
	if(S.top==-1)//栈空 报错
		return false;
	x=S.data[S.top];//栈顶元素先出栈 
	S.top=S.top-1; //指针再减1 数据还残留在内存中，只是逻辑上被删除了
	return true; 
}
void Inverser(Stack &S,Queue &Q){
	//本算法实现将队列中的元素逆置
		int x=0;
	while(!QueueEmpty(Q)){
		DeQueue(Q,x);//队列中全部元素依次出队 
		Push(S,x);//元素依次入栈 
	}
	while(!StackEmpty(S)){
		Pop(S,x);//栈中全部元素依次出栈 
		EnQueue(Q,x);//再入队
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

