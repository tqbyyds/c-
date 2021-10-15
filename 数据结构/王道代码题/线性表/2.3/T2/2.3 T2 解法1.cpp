#include<stdio.h>
void Del_x(LinkList &L,int x){
	//L为带头结点的单链表 本算法删除L中所有值为x的结点
	LNode *p=L->next,*pre=L,*q;//置p和pre的初始值 
	while(p!=NULL){
		if(p->data==x){
			q=p;    //q指向该结点 
			p=p->next;
			pre->next=p; 
			//删除*q结点 
			free(q);//释放*q结点的空间 
		}
		else{ //否则 pre和p同步后移 
			pre=p;
			p=p->next;
		}
	}
} 
int main()
{

	return 0;
 }

