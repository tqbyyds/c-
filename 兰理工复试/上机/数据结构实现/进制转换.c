#include<stdio.h>
#define MaxSize 10//定义栈中元素的最大个数 
typedef struct{ 
	int data[MaxSize];//静态数组存放栈中元素 
	int top;//栈顶指针 指向栈顶元素 数组下标 从0开始 
}SqStack;
int StackEmpty(SqStack S){
	if(S.top==-1)//栈空
		return 1;
	else//不空 
		return 0; 
}
//初始化栈
void InitStack(SqStack *S){
	S->top=-1;//初始化栈顶指针  指向当前位置 
}
//新元素入栈
int Push(SqStack *S,int x){
	if(S->top==MaxSize-1)
		return 0;
	S->data[++S->top]=x;//指针先加一 新元素入栈 
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

//读栈顶元素 
int GetTop(SqStack S,int *x){
	if(S.top==-1)//栈空 报错
		return 0;
	*x=S.data[S.top];//X记录栈顶元素 
	return 1; 
}

int main()
{
	int x,i;
	printf("请输入十进制数");
	scanf("%d",&x);
	printf("请输入要转换的进制"); 
	scanf("%d",&i);
	SqStack s;
	InitStack(&s);
	while(x){
		Push(&s,x%i);
		x=x/i;
	}
	while(!StackEmpty(s)){
		Pop(&s,&x);
		printf("%d",x);
	}
	return 0;
 }
  
