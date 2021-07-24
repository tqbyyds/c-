#include<stdio.h>
typedef struct LNode{ //定义单链表节点类型 
	int data;		//每个节点存放一个数据元素 
	struct LNode *next;//指针指向下一个节点 
}LNode, *LinkList;
bool InitList(LinkList *L){//分配一个头节点 
	L=(LNode *)malloc(sizeof(LNode));
		if(L==NULL)
			return false;//内存不足分配失败 
		L->next=L;//头节点next指向头节点 
		return true;
}
bool isTail(LinkList L,LNode *p){//判断结点p是否为循环单链表的表尾结点 
	if(p->next==L)
		return true;
	else
		return false;
} 
int main()
{

	return 0;
 }

