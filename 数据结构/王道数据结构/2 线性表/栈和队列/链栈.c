#include<stdio.h>
typedef struct Linknode{
	int data;
	struct LinkNode *next;
} *LStack,LStNode;
LStack List_HeadInsert(LStack L){ 
	int x;
	LStNode *s;
	L=(LStNode *)malloc(sizeof(LStNode));
	L->next=NULL;
	scanf("%d",&x);
	while(x!=9999){
		s=(LStNode *)malloc(sizeof(LStNode));
		s->data=x;
		s->next=L->next;
		L->next=s; 
		scanf("%d",&x);
	}
	return L 
}
LStNode *GetElem(LStack L,int i){//��λ���� 
		if(i<1)
			return false;
		LStNode *p;//ָ��ָ��ǰɨ�赽�Ľ�� 
		int j=0;//��ǰpָ����ǵڼ������ 
		p=L;//Lָ��ͷ�ڵ㣬ͷ�ڵ��ǵ�0���ڵ㣨���洢���ݣ� 
	while(p!=NULL&&j<i-1){//ѭ���ҵ���i-1����� 
		p=p->next;
		j++;
	}
	return p;
}
bool LStDelete(LStack L,int i,int *e){
		if(i<1)
			return false;
		LStNode *p=GetElem(L,i-1);//�ҵ���i-1�����	
	if(p=NULL)//iֵ���Ϸ� 
		return false;
	if(p->next==NULL)//��i-1���ڵ�����������ڵ� 
		return false;
	LStNode *q=p->next;//��qָ��ɾ���ڵ�
	*e=q->data;//��e���ر�ɾԪ�ص�ֵ 
	p->next=q->next; //��*q�ڵ�����жϿ�
	free(q);//�ͷŽڵ�洢�ռ� 
	return true;//ɾ���ɹ� 
} 
int main()
{

	return 0;
 }

