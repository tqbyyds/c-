#include<stdio.h>
#include<malloc.h>
typedef struct LNode{ //���嵥����ڵ����� 
	int data;		//ÿ���ڵ���һ������Ԫ�� 
	struct LNode *next;//ָ��ָ����һ���ڵ� 
}LNode, *LinkList;
void Del_x(LinkList &L,int x){
	//�ݹ�ʵ���ڵ�����L��ɾ��ֵΪx�Ľ��
	LNode *P;//pָ���ɾ�����
	if(L==NULL)//�ݹ����
		return;
	if(L->data==x){//��L��ָ����ֵΪx 
		LinkList P;
		P=L;//ɾ��*L������Lָ����һ��� 
		L=L->next;
		free(P);
		Del_x(L,x);//�ݹ���� 
	}
	else//��L��ָ����ֵ��Ϊx 
		Del_x(L->next,x);//�ݹ���� 
}
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

