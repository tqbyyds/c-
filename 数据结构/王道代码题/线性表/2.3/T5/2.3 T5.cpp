#include<stdio.h>
LinkList Reverse _1(LinkList L){
	//L是带头节点的单链表 本算法将L就地逆置
	LNode *p,*r;//p为工作指针 r为p的后继 以防断链
	p=L->next;//从第一个元素结点开始 
	L->next=NULL;//先将头结点的L的next域置为NULL 
	while(p!=NULL){//依次将元素结点摘下 
		r=p->next;//暂存p的后继 
		p->next=L->next;//将p结点插入到头结点之后 
		L->next=p;
		p=r;
	}
	return L; 
} 
int main()
{

	return 0;
 }

