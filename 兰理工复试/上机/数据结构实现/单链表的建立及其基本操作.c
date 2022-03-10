#include<stdio.h>
#include <stdlib.h>//malloc free 的头文件` 
typedef struct LNode{ //定义单链表节点类型 
	int data;		//每个节点存放一个数据元素 
	struct LNode *next;//指针指向下一个节点 
}LNode, *LinkList;
LinkList List_TailInsert(LinkList L){//尾插法建立单链表 正向建立单链表 
	int x;//设Elem Type为整形
	L=(LinkList)malloc(sizeof(LNode));
	LNode *s,*r=L;//r为表尾指针
	printf("输入结点的值输入9999后表示结束\n"); 
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
LinkList List_HeadInsert(LinkList L){//头插法建立单链表 逆向建立单链表 
	int x;//设Elem Type为整形
	LNode *s;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;//初始为空链表 
	printf("输入结点的值输入9999后表示结束\n"); 
	scanf("%d",&x);//输入结点的值
	while(x!=9999){//输入9999后表示结束
		s=(LNode *)malloc(sizeof(LNode));
		s->data=x;
		s->next=L->next;
		L->next=s; //将新结点插入表中，L为头指针 
		scanf("%d",&x);
	}
	return L ;
}
LinkList InitList(LinkList L){//分配一个头节点 
	L=(LNode *)malloc(sizeof(LNode)); 
		if(L==NULL)
			return 0;//内存不足分配失败 
		L->next=NULL;//头节点之后暂时还没有节点
		return L; 
}
int Empty(LinkList L){//判断链表是否为空 带头节点 
	if (L->next==NULL)
		return 1;
	else
		return 0;
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
int InsertNextNode(LNode *p,int e){//后插操作 在p结点之后插入元素e 
	if(p==NULL)
		return 0;
	LNode *s=(LNode *)malloc(sizeof(LNode));
	if(s==NULL)//内存分配失败 
		return 0;
	s->data=e;//用结点保存数据元素e 
	s->next=p->next;
	p->next=s;//将结点s连到p之后 
	return 1;
} 
int ListInsert(LinkList L,int i,int e){//在第i个位置插入元素e 
		if(i<1)
			return 0;
		LNode *p=GetElem(L,i-1);//找到第i-1个结点
		return InsertNextNode(p,e);//p后插入新元素e 
} 
int ListDelete(LinkList L,int i,int *e){
		if(i<1)
			return 0;
		LinkList p=GetElem(L,i-1);//找到第i-1个结点	
	if(p==NULL)//i值不合法 
		return 0;
	if(p->next==NULL)//第i-1个节点后已无其他节点 
		return 0;
	LNode *q=p->next;//令q指向被删除节点
	*e=q->data;//用e返回被删元素的值 
	p->next=q->next; //将*q节点从链中断开
	free(q);//释放节点存储空间 */
	return 1;//删除成功 
}
LNode *LocateElem(LinkList L,int e){//按值查找 
	LNode *p=L->next;
	//从第一个结点开始查找数据域为e的结点
	while(p!=NULL&&p->data!=e)
		p=p->next;
	return p;//找到后返回该结点指针，否则返回NULL 
}
int Length(LinkList L){
	int len =0;//统计表长
	LNode *P=L;
	while(P->next!=NULL){
		P=P->next;                                                                
		len++;
	}
	return len;
} 
int main()
{
	LinkList L;
	L=List_HeadInsert(L);
//	L=InitList(L);
	if(Empty(L)){
		printf("为空链表\n"); 
	}
	else{
		printf("为非空链表\n"); 
	}
	LNode *p=L->next;
	p=GetElem(L,8);
	printf("%d\n",p->data);
	InsertNextNode(p,9);
	printf("%d\n",p->next->data);
	ListInsert(L,10,10);
	ListInsert(L,11,11);
	int e=0;
	ListDelete(L,11,&e);
	printf("%d\n",e); 
	p=LocateElem(L,10);
	printf("%d\n",p->data);
	printf("长度为%d\n",Length(L));
	return 0;
 }
 //尾插8 9 11 10 0
 //头插 1 9 11 10 10
