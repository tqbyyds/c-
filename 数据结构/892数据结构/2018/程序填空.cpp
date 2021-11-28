#include<stdio.h>
#include<malloc.h>
typedef struct LNode{ //定义单链表节点类型 
	int data;		//每个节点存放一个数据元素 
	struct LNode *next;//指针指向下一个节点 
}LNode, *LinkList;
LinkList List_TailInsert(LinkList &L){//尾插法建立单链表 正向建立单链表 
	int x;//设Elem Type为整形
	L=(LinkList)malloc(sizeof(LNode));
	L->data=0;
	LNode *s,*r=L;//r为表尾指针
	scanf("%d",&x);//输入结点的值
	while(x!=9999){//输入9999后表示结束
		if(L->data==0){
			L->data=x;
		}
		else{
			s=(LNode *)malloc(sizeof(LNode));
		s->data=x;//在r结点之后插入元素x 
		r->next=s; 
		r=s; //r指向新的表尾结点 永远保持r指向最后一个结点
		}
		scanf("%d",&x);
	}
	r->next=NULL;
	return L; 
}
LinkList sort(LinkList head){
	LNode *p,*q,*r,*s;
	p=(LNode*)malloc(sizeof(LNode));
	p->next=head;head=p;
	while(p->next!=NULL){
		q=p->next;r=p;
	while(q->next!=NULL){
		if(q->next->data<r->next->data)
			r=q;
		q=q->next;
	}
	if(p!=r){
		s=r->next;
		r->next=s->next;
		s->next=p->next;
		p->next=s; 
	}
	p=p->next;
}
p=head;head=head->next;free(p);return head;
	
}
int main()
{
	 LinkList L; 
	 List_TailInsert(L);
	 L=sort(L);
	 while(L!=NULL){
	 	printf("%d\n",L->data);
	 	L=L->next;
	 }
	return 0;
 }

