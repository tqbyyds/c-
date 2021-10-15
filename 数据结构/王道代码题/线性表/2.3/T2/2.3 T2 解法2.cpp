#include<stdio.h>
void Del_x(LinkList &L,int x){
	//L为带头结点单链表 本算法删除L中所有值为x的结点
	LNode *P=L->next,*r=L,*q;//r指向尾结点 其初始值为头结点 
	while(P!=NULL){
		if(P->data!=x){//*P结点值不为x时将其连接到L尾部 
			r->next=P;
			r=P;
			P=P->next; //继续扫描 
		}
		else{//*p结点值为x时将其释放 
			q=p;
			p=p->next;//继续扫描 
			free(q);//释放空间 
		}
	}
	r->next=NULL; 
} 
int main()
{

	return 0;
 }

