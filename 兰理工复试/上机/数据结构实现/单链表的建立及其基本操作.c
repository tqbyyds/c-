#include<stdio.h>
#include <stdlib.h>//malloc free ��ͷ�ļ�` 
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
LinkList List_HeadInsert(LinkList L){//ͷ�巨���������� ������������ 
	int x;//��Elem TypeΪ����
	LNode *s;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;//��ʼΪ������ 
	printf("�������ֵ����9999���ʾ����\n"); 
	scanf("%d",&x);//�������ֵ
	while(x!=9999){//����9999���ʾ����
		s=(LNode *)malloc(sizeof(LNode));
		s->data=x;
		s->next=L->next;
		L->next=s; //���½�������У�LΪͷָ�� 
		scanf("%d",&x);
	}
	return L ;
}
LinkList InitList(LinkList L){//����һ��ͷ�ڵ� 
	L=(LNode *)malloc(sizeof(LNode)); 
		if(L==NULL)
			return 0;//�ڴ治�����ʧ�� 
		L->next=NULL;//ͷ�ڵ�֮����ʱ��û�нڵ�
		return L; 
}
int Empty(LinkList L){//�ж������Ƿ�Ϊ�� ��ͷ�ڵ� 
	if (L->next==NULL)
		return 1;
	else
		return 0;
}
LNode *GetElem(LinkList L,int i){//��λ���� 
		if(i<0)
			return NULL;
		LNode *p;//ָ��ָ��ǰɨ�赽�Ľ�� 
		int j=0;//��ǰpָ����ǵڼ������ 
		p=L;//Lָ��ͷ�ڵ㣬ͷ�ڵ��ǵ�0���ڵ㣨���洢���ݣ� 
	while(p!=NULL&&j<i){//ѭ���ҵ���i����� 
		p=p->next;
		j++;
	}
	return p;
}
int InsertNextNode(LNode *p,int e){//������ ��p���֮�����Ԫ��e 
	if(p==NULL)
		return 0;
	LNode *s=(LNode *)malloc(sizeof(LNode));
	if(s==NULL)//�ڴ����ʧ�� 
		return 0;
	s->data=e;//�ý�㱣������Ԫ��e 
	s->next=p->next;
	p->next=s;//�����s����p֮�� 
	return 1;
} 
int ListInsert(LinkList L,int i,int e){//�ڵ�i��λ�ò���Ԫ��e 
		if(i<1)
			return 0;
		LNode *p=GetElem(L,i-1);//�ҵ���i-1�����
		return InsertNextNode(p,e);//p�������Ԫ��e 
} 
int ListDelete(LinkList L,int i,int *e){
		if(i<1)
			return 0;
		LinkList p=GetElem(L,i-1);//�ҵ���i-1�����	
	if(p==NULL)//iֵ���Ϸ� 
		return 0;
	if(p->next==NULL)//��i-1���ڵ�����������ڵ� 
		return 0;
	LNode *q=p->next;//��qָ��ɾ���ڵ�
	*e=q->data;//��e���ر�ɾԪ�ص�ֵ 
	p->next=q->next; //��*q�ڵ�����жϿ�
	free(q);//�ͷŽڵ�洢�ռ� */
	return 1;//ɾ���ɹ� 
}
LNode *LocateElem(LinkList L,int e){//��ֵ���� 
	LNode *p=L->next;
	//�ӵ�һ����㿪ʼ����������Ϊe�Ľ��
	while(p!=NULL&&p->data!=e)
		p=p->next;
	return p;//�ҵ��󷵻ظý��ָ�룬���򷵻�NULL 
}
int Length(LinkList L){
	int len =0;//ͳ�Ʊ�
	LNode *P=L;
	while(P->next!=NULL){
		P=P->next;                                                                
		len++;
	}
	return len;
} 
int main()
{
	LinkList L;
	L=List_HeadInsert(L);
//	L=InitList(L);
	if(Empty(L)){
		printf("Ϊ������\n"); 
	}
	else{
		printf("Ϊ�ǿ�����\n"); 
	}
	LNode *p=L->next;
	p=GetElem(L,8);
	printf("%d\n",p->data);
	InsertNextNode(p,9);
	printf("%d\n",p->next->data);
	ListInsert(L,10,10);
	ListInsert(L,11,11);
	int e=0;
	ListDelete(L,11,&e);
	printf("%d\n",e); 
	p=LocateElem(L,10);
	printf("%d\n",p->data);
	printf("����Ϊ%d\n",Length(L));
	return 0;
 }
 //β��8 9 11 10 0
 //ͷ�� 1 9 11 10 10
