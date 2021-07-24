#include<stdio.h>
typedef struct DNode{ //定义双链表节点类型 
	int data;		//数据域 
	struct DNode *prior,*next;//前驱和后驱指针 
}DNode, *DLinkList;
bool InitDLinkList(DLinkList *L){
	L=(DNode *)malloc(sizeof(DNode));//分配一个头节点 
	if(L==NULL)
		return false;//内存不足分配失败 
	L->prior=L;//头节点的prior指向头节点 
	L->next=L;//头节点的next指向头节点 
	return true;
}
bool Empty(DLinklist L){//判断双链表是否为空
	if (L->next==NULL)
		return true;
	else
		return false;
}
bool isTail(DLinkList L,DNode *p){//判断结点p是否为循环双链表的表尾结点 
	if(p->next==L)
		return true;
	else
		return false;
}
bool InsertNextDNode(DNode *p,DNode *s){//后插操作 在p结点之后插入s结点 
	if(p==NULL||s==NULL)//非法参数 
		return false;
		s->next=p->next;
		if(p->next!=NULL)//如果p结点有后继结点 
			p->next->prior=s;
		s->prior=p;
		p->next=s; 
	    return true;
}
bool DeleteNextDNode(DNode *p){//删除p结点的后继结点
	if(p==NULL) return false;
	DNode *q=p->next;//找到p的后继结点q
	if(q==NULL) return false;//p没有后继
	p->next=q->next; 
	if(q->next!=NULL)//q结点不是最后一个结点
		q->next->prior=p;
	free(q);//释放结点空间 
	return true;
} 
int main()
{

	return 0;
 }

