#include<stdio.h>
typedef struct DNode{ //����˫����ڵ����� 
	int data;		//������ 
	struct DNode *prior,*next;//ǰ���ͺ���ָ�� 
}DNode, *DLinkList;
bool InitDLinkList(DLinkList *L){
	L=(DNode *)malloc(sizeof(DNode));//����һ��ͷ�ڵ� 
	if(L==NULL)
		return false;//�ڴ治�����ʧ�� 
	L->prior=L;//ͷ�ڵ��priorָ��ͷ�ڵ� 
	L->next=L;//ͷ�ڵ��nextָ��ͷ�ڵ� 
	return true;
}
bool Empty(DLinklist L){//�ж�˫�����Ƿ�Ϊ��
	if (L->next==NULL)
		return true;
	else
		return false;
}
bool isTail(DLinkList L,DNode *p){//�жϽ��p�Ƿ�Ϊѭ��˫����ı�β��� 
	if(p->next==L)
		return true;
	else
		return false;
}
bool InsertNextDNode(DNode *p,DNode *s){//������ ��p���֮�����s��� 
	if(p==NULL||s==NULL)//�Ƿ����� 
		return false;
		s->next=p->next;
		if(p->next!=NULL)//���p����к�̽�� 
			p->next->prior=s;
		s->prior=p;
		p->next=s; 
	    return true;
}
bool DeleteNextDNode(DNode *p){//ɾ��p���ĺ�̽��
	if(p==NULL) return false;
	DNode *q=p->next;//�ҵ�p�ĺ�̽��q
	if(q==NULL) return false;//pû�к��
	p->next=q->next; 
	if(q->next!=NULL)//q��㲻�����һ�����
		q->next->prior=p;
	free(q);//�ͷŽ��ռ� 
	return true;
} 
int main()
{

	return 0;
 }

