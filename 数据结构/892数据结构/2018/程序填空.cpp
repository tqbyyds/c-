#include<stdio.h>
#include<malloc.h>
typedef struct LNode{ //���嵥����ڵ����� 
	int data;		//ÿ���ڵ���һ������Ԫ�� 
	struct LNode *next;//ָ��ָ����һ���ڵ� 
}LNode, *LinkList;
LinkList List_TailInsert(LinkList &L){//β�巨���������� ������������ 
	int x;//��Elem TypeΪ����
	L=(LinkList)malloc(sizeof(LNode));
	L->data=0;
	LNode *s,*r=L;//rΪ��βָ��
	scanf("%d",&x);//�������ֵ
	while(x!=9999){//����9999���ʾ����
		if(L->data==0){
			L->data=x;
		}
		else{
			s=(LNode *)malloc(sizeof(LNode));
		s->data=x;//��r���֮�����Ԫ��x 
		r->next=s; 
		r=s; //rָ���µı�β��� ��Զ����rָ�����һ�����
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

