#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{ //���嵥����ڵ����� 
	int data;		//ÿ���ڵ���һ������Ԫ�� 
	struct LNode *next;//ָ��ָ����һ���ڵ� 
}LNode, *LinkList;
LinkList List_TailInsert(LinkList L){//β�巨���������� ������������ 
	int x;//��Elem TypeΪ����
	L=(LinkList)malloc(sizeof(LNode));
	LNode *s,*r=L;//rΪ��βָ��
	printf("�������ֵ����9999���ʾ����\n"); 
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
