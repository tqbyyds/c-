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
LinkList Delete_Min(LinkList &L){
	//L�Ǵ�ͷ�ڵ�ĵ����� ���㷨ɾ������Сֵ���
	LNode *pre=L,*p=pre->next;//pΪ����ָ�� preָ����ǰ�� 
	LNode *minpre=pre,*minp=p;//������Сֵ��㼰��ǰ�� 
	while(p!=NULL){
		if(p!=NULL){
			if(p->data<minp->data){
				minp=p;
				minpre=pre;
			}
			pre=p;  //����ɨ����һ����� 
			p=p->next;
		}
		minpre->next=minp->next;//ɾ����Сֵ��� 
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

