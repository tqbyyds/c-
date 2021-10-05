#include<stdio.h>
typedef struct LNode{ //定义单链表节点类型 
	int data;		//每个节点存放一个数据元素 
	struct LNode *next;//指针指向下一个节点 
}LNode, *LinkList;
LinkList List_TailInsert(LinkList &L){//尾插法建立单链表 正向建立单链表 
	int x;//设Elem Type为整形
	L=(LinkList)malloc(sizeof(LNode));
	LNode *s,*r=L;//r为表尾指针
	scanf("%d",&x);//输入结点的值
	while(x!=9999){//输入9999后表示结束
		s=(LNode *)malloc(sizeof(LNode));
		s->data=x;//在r结点之后插入元素x 
		r->next=s; 
		r=s; //r指向新的表尾结点 永远保持r指向最后一个结点
		scanf("%d",&x);
	}
	r->next=NULL;
	return L; 
}
LinkList List_HeadInsert(LinkList &L){//头插法建立单链表 逆向建立单链表 
	int x;//设Elem Type为整形
	LNode *s;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;//初始为空链表 
	scanf("%d",&x);//输入结点的值
	while(x!=9999){//输入9999后表示结束
		s=(LNode *)malloc(sizeof(LNode));
		s->data=x;
		s->next=L->next;
		L->next=s; //将新结点插入表中，L为头指针 
		scanf("%d",&x);
	}
	return L 
}
bool InitList(LinkList &L){//分配一个头节点 
	L=(LNode *)malloc(sizeof(LNode)); 
		if(L==NULL)
			return false;//内存不足分配失败 
			L->next=NULL;//头节点之后暂时还没有节点
			return true; 
}
bool Empty(Linklist L){//判断链表是否为空带头节点 
	if (L->next==NULL)
		return true;
	else
		return false;
}
LNode *GetElem(LinkList L,int i){//按位查找 
		if(i<0)
			return NULL;
		LNode *p;//指针指向当前扫描到的结点 
		int j=0;//当前p指向的是第几个结点 
		p=L;//L指向头节点，头节点是第0个节点（不存储数据） 
	while(p!=NULL&&j<i){//循环找到第i个结点 
		p=p->next;
		j++;
	}
	return p;
}
bool InsertNextNode(LNode *p,int e){//后插操作 在p结点之后插入元素e 
	if(p==NULL)
		return false;
	LNode *s=(LNode *)malloc(sizeof(LNode));
	if(s==NULL)//内存分配失败 
		return false;
	s->date=e;//用结点保存数据元素e 
	s->next=p->next;
	p->next=s;//将结点s连到p之后 
	return true;
} 
bool ListInsert(LinkList L,int i,int e){//在第i个位置插入元素e 
		if(i<1)
			return false;
		LNode *p=GetElem(L,i-1);//找到第i-1个结点
		return InsertNextNode(p,e);//p后插入新元素e 
} 
bool ListDelete(LinkList L,int i,int &e){
		if(i<1)
			return false;
		LNode *p=GetElem(L,i-1);//找到第i-1个结点	
	if(p=NULL)//i值不合法 
		return false;
	if(p->next==NULL)//第i-1个节点后已无其他节点 
		return false;
	LNode *q=p->next;//令q指向被删除节点
	e=q->data;//用e返回被删元素的值 
	p->next=q->next; //将*q节点从链中断开
	free(q);//释放节点存储空间 
	return true;//删除成功 
}
LNode *LocateElem(LinkList L,int e){//按值查找 
	LNode *p=L->next;
	//从第一个结点开始查找数据域为e的结点
	while(p!=NULL&&p->date!=e)
		p=p->next;
	return p;//找到后返回该结点指针，否则返回NULL 
}
int Length(LinkList L){
	int len =0;//统计表长
	LNode *P=L;
	while(P->next!=NULL){
		p=p->next;
		len++;
	}
	return len;
} 


int main()
{

	return 0;
 }

