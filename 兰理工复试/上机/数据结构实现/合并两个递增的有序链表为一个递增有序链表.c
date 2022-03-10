#include<stdio.h>
#include<stdlib.h>
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
LinkList  Merge(LinkList La,LinkList Lb,LinkList Lc){
	LNode *pa,*pb,*pc,*q;
	pa=La->next;
	pb=Lb->next;
	Lc=pc=La;
	while(pa&&pb){
		if(pa->data<pb->data){
			pc->next=pa;
			pc=pa;
			pa=pa->next;
		}
		else if(pa->data>pb->data){
			pc->next=pb;
			pc=pb;
			pb=pb->next;
		}
		else{
			pc->next=pa;
			pc=pa;
			pa=pa->next;
			q=pb->next;
			free(pb);
			pb=q;
		}
	}
	pc->next=pa?pa:pb;
	free(Lb);
	return Lc;
}
int main(){
	LinkList La,Lb,Lc,pc;
	La=List_TailInsert(La);
	Lb=List_TailInsert(Lb);
	Lc=Merge(La,Lb,Lc);
	pc=Lc->next;
	while(pc){
		printf("%d\n",pc->data);
		pc=pc->next;
	}
	return 0;
} 
