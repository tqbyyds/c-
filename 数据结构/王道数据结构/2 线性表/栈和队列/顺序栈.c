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
bool StackEmpty(SqStack *S){
	if(S->top==-1)//栈空
		return true;
	else//不空 
		return false; 
}

//新元素入栈
bool Push(SqStack *s,int x){
	if(S->top==MaxSize-1)
		return false;
	S->data[++S->top]=x;//指针先加一 新元素入栈 
	return true; 
}
//新元素入栈
bool Push_(SqStack *s,int x){
	if(S->top==MaxSize-1)
		return false;
	S->data[S->top++]=x;//指针先加一 新元素入栈 
	return true; 
}
//出栈操作
bool Pop(SqStack *S,int *x){
	if(S->top==-1)//栈空 报错
		return false;
	*x=S->data[S->top];//栈顶元素先出栈 
	S->top=S->top-1; //指针再减1 数据还残留在内存中，只是逻辑上被删除了
	return true; 
}
//出栈操作
bool Pop(SqStack *S,int *x){
	if(S->top==-1)//栈空 报错
		return false;
	*x=S->data[S->top--]; //栈顶元素先出栈 指针再减1 数据还残留在内存中，只是逻辑上被删除了
	return true; 
}
//出栈操作
bool Pop_(SqStack *S,int *x){
	if(S->top==-1)//栈空 报错
		return false;
	*x=S->data[--S->top]; //栈顶元素先出栈 指针再减1 数据还残留在内存中，只是逻辑上被删除了
	return true; 
}
//读栈顶元素 
bool GetTop(SqStack S,int *x){
	if(S->top==-1)//栈空 报错
		return false;
	*x=S->data[S->top];//X记录栈顶元素 
	return true; 
}  
int main()
{

	return 0;
 }

