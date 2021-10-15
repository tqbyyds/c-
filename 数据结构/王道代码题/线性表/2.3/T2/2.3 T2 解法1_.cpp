#include<stdio.h>
#include<malloc.h>
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
	LinkList L; 
	 List_TailInsert(L);
	 int x;
	 scanf("%d",&x); 
	 Del_x(L,x);
	 L=L->next; 
	 while(L!=NULL){
	 	printf("%d\n",L->data);
	 	L=L->next;
	 }
	return 0;
 }

