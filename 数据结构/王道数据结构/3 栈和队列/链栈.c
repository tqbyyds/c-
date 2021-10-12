#include<stdio.h>
typedef struct StackNode
{
	ElemType data;
	struct StackNode *next;
 }StackNode,*LinkStack
 bool InitStack(LinkStack &S){
 	//构造一个空栈S，栈顶指针置空
 	S=NULL;
 	return true;	
 }
 bool Push(LinkStack &S,SElemType e){
 	//在栈顶插入元素e
 	StackNode* p=(StackNode *)malloc(sizeof(StackNode));
 	p->data=e;
 	p->next=S;
 	S=p;
 	return true;
 }
 bool Pop(LinkStack &S,SElemType &e){
 	//删除S的栈顶元素 用e返回其值
	 if(S==NULL)return false;
	 e=S->data;//将栈顶元素赋给e
	 p=S;//用P临时保存栈顶元素空间 以备释放
	 S=S->next;//修改栈顶指针
	 free(p);
	 return true; 
 }
SELemType GetTop(LinkStack S){
	if(S!=NULL)//栈非空
		return S->data;//返回栈顶元素的值 栈顶指针不变 
} 
	 
int main()
{

	return 0;
 }

