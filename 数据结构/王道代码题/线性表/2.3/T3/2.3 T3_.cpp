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
void R_Print(LinkList L){
	//��β��ͷ���������L��ÿ������ֵ
	if(L->next!=NULL){
		R_Print(L->next); //�ݹ� 
	}
	if(L!=NULL) printf("%d\n",L->data); 
}
void R_Ignore_Head(LinkList L){
	if(L!=NULL) R_Print(L->next);//������� 
} 

int main()
{
	 LinkList L; 
	 List_TailInsert(L);
	 R_Ignore_Head(L);
	return 0;
 }
 
