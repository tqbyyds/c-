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
LinkList Delete_Min(LinkList &L){
	//L是带头节点的单链表 本算法删除其最小值结点
	LNode *pre=L,*p=pre->next;//p为工作指针 pre指向其前驱 
	LNode *minpre=pre,*minp=p;//保存最小值结点及其前驱 
	while(p!=NULL){
		if(p!=NULL){
			if(p->data<minp->data){
				minp=p;
				minpre=pre;
			}
			pre=p;  //继续扫描下一个结点 
			p=p->next;
		}
		minpre->next=minp->next;//删除最小值结点 
		free(minp);
		return L; 
	} 
} 
int main()
{
	LinkList L;
	List_TailInsert(L);
	Delete_Min(L);
	L=L->next;
	int i=0;
	while(L!=NULL){
		printf("%d",L->data);
		L=L->next;	
	}
	return 0;
 }

