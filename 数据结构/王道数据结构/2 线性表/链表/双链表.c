#include<stdio.h>
typedef struct DNode{ //定义双链表节点类型 
	int data;		//数据域 
	struct DNode *prior,*next;//前驱和后驱指针 
}DNode, *DLinkList;
bool InitDLinkList(DLinkList *L){
	L=(DNode *)malloc(sizeof(DNode));//分配一个头节点 
	if(L==NULL)
		return false;//内存不足分配失败 
	L->prior=NULL;//头节点的prior永远指向NULL 
	L->next=NULL;//头节点之后暂时还没有结点 
	return true;
}
bool Empty(DLinklist L){//判断链表是否为空
	if (L->next==NULL)
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
void DestoryList(DLinklist L){//循环释放各个数据结点 
	while(L->Next!=NULL)
		DeletNextDNode(L);
	free(L);//释放头节点
	L=NULL;//头指针指向NULL 
}
//双链表不可随机存取，按位查找 按值查找操作都只能用遍历的方式实现。时间复杂度为O(n)
DNode *LocateElem(DLinkList L,int e){//按值查找 
	DNode *p=L->next;
	//从第一个结点开始查找数据域为e的结点
	while(p!=NULL&&p->date!=e)
		p=p->next;
	return p;//找到后返回该结点指针，否则返回NULL 
}
DNode *GetElem(DLinkList L,int i){//按位查找 
		if(i<1)
			return false;
		DNode *p;//指针指向当前扫描到的结点 
		int j=0;//当前p指向的是第几个结点 
		p=L;//L指向头节点，头节点是第0个节点（不存储数据） 
	while(p!=NULL&&j<i-1){//循环找到第i-1个结点 
		p=p->next;
		j++;
	}
	return p;
} 
int main()
{
	
	return 0;
 }

