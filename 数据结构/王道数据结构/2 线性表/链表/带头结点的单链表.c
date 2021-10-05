#include<stdio.h>
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
LinkList List_HeadInsert(LinkList &L){//ͷ�巨���������� ������������ 
	int x;//��Elem TypeΪ����
	LNode *s;
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;//��ʼΪ������ 
	scanf("%d",&x);//�������ֵ
	while(x!=9999){//����9999���ʾ����
		s=(LNode *)malloc(sizeof(LNode));
		s->data=x;
		s->next=L->next;
		L->next=s; //���½�������У�LΪͷָ�� 
		scanf("%d",&x);
	}
	return L 
}
bool InitList(LinkList &L){//����һ��ͷ�ڵ� 
	L=(LNode *)malloc(sizeof(LNode)); 
		if(L==NULL)
			return false;//�ڴ治�����ʧ�� 
			L->next=NULL;//ͷ�ڵ�֮����ʱ��û�нڵ�
			return true; 
}
bool Empty(Linklist L){//�ж������Ƿ�Ϊ�մ�ͷ�ڵ� 
	if (L->next==NULL)
		return true;
	else
		return false;
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
bool InsertNextNode(LNode *p,int e){//������ ��p���֮�����Ԫ��e 
	if(p==NULL)
		return false;
	LNode *s=(LNode *)malloc(sizeof(LNode));
	if(s==NULL)//�ڴ����ʧ�� 
		return false;
	s->date=e;//�ý�㱣������Ԫ��e 
	s->next=p->next;
	p->next=s;//�����s����p֮�� 
	return true;
} 
bool ListInsert(LinkList L,int i,int e){//�ڵ�i��λ�ò���Ԫ��e 
		if(i<1)
			return false;
		LNode *p=GetElem(L,i-1);//�ҵ���i-1�����
		return InsertNextNode(p,e);//p�������Ԫ��e 
} 
bool ListDelete(LinkList L,int i,int &e){
		if(i<1)
			return false;
		LNode *p=GetElem(L,i-1);//�ҵ���i-1�����	
	if(p=NULL)//iֵ���Ϸ� 
		return false;
	if(p->next==NULL)//��i-1���ڵ�����������ڵ� 
		return false;
	LNode *q=p->next;//��qָ��ɾ���ڵ�
	e=q->data;//��e���ر�ɾԪ�ص�ֵ 
	p->next=q->next; //��*q�ڵ�����жϿ�
	free(q);//�ͷŽڵ�洢�ռ� 
	return true;//ɾ���ɹ� 
}
LNode *LocateElem(LinkList L,int e){//��ֵ���� 
	LNode *p=L->next;
	//�ӵ�һ����㿪ʼ����������Ϊe�Ľ��
	while(p!=NULL&&p->date!=e)
		p=p->next;
	return p;//�ҵ��󷵻ظý��ָ�룬���򷵻�NULL 
}
int Length(LinkList L){
	int len =0;//ͳ�Ʊ�
	LNode *P=L;
	while(P->next!=NULL){
		p=p->next;
		len++;
	}
	return len;
} 


int main()
{

	return 0;
 }

