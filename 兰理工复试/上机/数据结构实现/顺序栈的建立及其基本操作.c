#include<stdio.h>
#define MaxSize 10//定义栈中元素的最大个数 
typedef struct{ 
	int data[MaxSize];//静态数组存放栈中元素 
	int top;//栈顶指针 指向栈顶元素 数组下标 从0开始 
}SqStack;
//初始化栈
void InitStack(SqStack *S){
	S->top=-1;//初始化栈顶指针  指向当前位置 
}
void InitStack_(SqStack *S){
	S->top=0;//初始化栈顶指针  指向下一个将要插入的位置 
}

//判断栈空
int StackEmpty(SqStack S){
	if(S.top==-1)//栈空
		return 1;
	else//不空 
		return 0; 
}
//判断栈空
int StackEmpty_(SqStack S){
	if(S.top==0)//栈空
		return 1;
	else//不空 
		return 0; 
}

//新元素入栈
int Push(SqStack *S,int x){
	if(S->top==MaxSize-1)
		return 0;
	S->data[++S->top]=x;//指针先加一 新元素入栈 
	return 1; 
}
//新元素入栈
int Push_(SqStack *S,int x){
	if(S->top==MaxSize-1)
		return 0;
	S->data[S->top++]=x;//指针后加一 新元素入栈 
	return 1; 
}
//出栈操作
int Pop(SqStack *S,int *x){
	if(S->top==-1)//栈空 报错
		return 0;
	*x=S->data[S->top];//栈顶元素先出栈 
	S->top=S->top-1; //指针再减1 数据还残留在内存中，只是逻辑上被删除了
	return 1; 
}
//出栈操作
int Pop_(SqStack *S,int *x){
	if(S->top==-1)//栈空 报错
		return 0;
	*x=S->data[--S->top]; //栈顶元素先出栈 指针再减1 数据还残留在内存中，只是逻辑上被删除了
	return 1; 
}
//读栈顶元素 
int GetTop(SqStack S,int *x){
	if(S.top==-1)//栈空 报错
		return 0;
	*x=S.data[S.top];//X记录栈顶元素 
	return 1; 
}
//读栈顶元素 
int GetTop_(SqStack S,int *x){
	if(S.top==0)//栈空 报错
		return 0;
	*x=S.data[--S.top];//X记录栈顶元素 
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
  

