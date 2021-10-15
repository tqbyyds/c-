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
void R_Print(LinkList L){
	//从尾到头输出单链表L中每个结点的值
	if(L->next!=NULL){
		R_Print(L->next); //递归 
	}
	if(L!=NULL) printf("%d\n",L->data); 
}
void R_Ignore_Head(LinkList L){
	if(L!=NULL) R_Print(L->next);//输出函数 
} 

int main()
{
	 LinkList L; 
	 List_TailInsert(L);
	 R_Ignore_Head(L);
	return 0;
 }
 
