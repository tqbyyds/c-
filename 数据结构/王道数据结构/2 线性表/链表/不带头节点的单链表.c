#include<stdio.h>
typedef struct LNode{ //定义单链表节点类型 
	int data;		//每个节点存放一个数据元素 
	struct LNode *next;//指针指向下一个节点 
}LNode, *LinkList;
bool InitList(LinkList L){
	L=NULL; //空表暂时还没有任何节点 
	return ture; 
} 
bool Empty(LinkList L){//判断单链表是否为空 
	return (L==NULL);
} 
int main()
{
	
	return 0;
 }

