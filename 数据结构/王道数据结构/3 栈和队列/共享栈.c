#include<stdio.h>
#define MaxSize 10//定义栈中元素的最大个数 
typedef struct{ 
	int data[MaxSize];//静态数组存放栈中元素 
	int top0;//0号栈栈顶指针 
	int top1;//1号栈栈顶指针 
}ShqStack;
void InitStack(ShStack *S){
	S->top0=-1;//初始化栈顶指针  栈满的条件；top0+1===top1 
	S->top1=MaxSize;
}
int main()
{

	return 0;
 }

