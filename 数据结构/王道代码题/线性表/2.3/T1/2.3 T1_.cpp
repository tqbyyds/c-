#include<stdio.h>
#include<malloc.h>
typedef struct LNode{ //定义单链表节点类型 
	int data;		//每个节点存放一个数据元素 
	struct LNode *next;//指针指向下一个节点 
}LNode, *LinkList;
void Del_x(LinkList &L,int x){
	//递归实现在单链表L中删除值为x的结点
	LNode *P;//p指向待删除结点
	if(L==NULL)//递归出口
		return;
	if(L->data==x){//若L所指结点的值为x 
		LinkList P;
		P=L;//删除*L，并让L指向下一结点 
		L=L->next;
		free(P);
		Del_x(L,x);//递归调用 
	}
	else//若L所指结点的值不为x 
		Del_x(L->next,x);//递归调用 
}
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
int main()
{
	 LinkList L; 
	 List_TailInsert(L);
	 int x;
	 scanf("%d",&x); 
	 Del_x(L,x);
	 while(L!=NULL){
	 	printf("%d\n",L->data);
	 	L=L->next;
	 }
	return 0;
 }

