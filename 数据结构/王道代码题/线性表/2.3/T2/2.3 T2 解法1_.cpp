#include<stdio.h>
#include<malloc.h>
typedef struct LNode{ //���嵥����ڵ����� 
	int data;		//ÿ���ڵ���һ������Ԫ�� 
	struct LNode *next;//ָ��ָ����һ���ڵ� 
}LNode, *LinkList;
LinkList List_TailInsert(LinkList &L){//β�巨���������� ������������ 
	int x;//��Elem TypeΪ����
	L=(LinkList)malloc(sizeof(LNode));
	LNode *s,*r=L;//rΪ��βָ��
	scanf("%d",&x);//�������ֵ
	while(x!=9999){//����9999���ʾ����
		s=(LNode *)malloc(sizeof(LNode));
		s->data=x;//��r���֮�����Ԫ��x 
		r->next=s; 
		r=s; //rָ���µı�β��� ��Զ����rָ�����һ�����
		scanf("%d",&x);
	}
	r->next=NULL;
	return L; 
}
void Del_x(LinkList &L,int x){
	//LΪ��ͷ���ĵ����� ���㷨ɾ��L������ֵΪx�Ľ��
	LNode *p=L->next,*pre=L,*q;//��p��pre�ĳ�ʼֵ 
	while(p!=NULL){
		if(p->data==x){
			q=p;    //qָ��ý�� 
			p=p->next;
			pre->next=p; 
			//ɾ��*q��� 
			free(q);//�ͷ�*q���Ŀռ� 
		}
		else{ //���� pre��pͬ������ 
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

