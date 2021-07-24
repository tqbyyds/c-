#include<stdio.h>
typedef struct DNode{ //����˫����ڵ����� 
	int data;		//������ 
	struct DNode *prior,*next;//ǰ���ͺ���ָ�� 
}DNode, *DLinkList;
bool InitDLinkList(DLinkList *L){
	L=(DNode *)malloc(sizeof(DNode));//����һ��ͷ�ڵ� 
	if(L==NULL)
		return false;//�ڴ治�����ʧ�� 
	L->prior=NULL;//ͷ�ڵ��prior��Զָ��NULL 
	L->next=NULL;//ͷ�ڵ�֮����ʱ��û�н�� 
	return true;
}
bool Empty(DLinklist L){//�ж������Ƿ�Ϊ��
	if (L->next==NULL)
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
void DestoryList(DLinklist L){//ѭ���ͷŸ������ݽ�� 
	while(L->Next!=NULL)
		DeletNextDNode(L);
	free(L);//�ͷ�ͷ�ڵ�
	L=NULL;//ͷָ��ָ��NULL 
}
//˫�����������ȡ����λ���� ��ֵ���Ҳ�����ֻ���ñ����ķ�ʽʵ�֡�ʱ�临�Ӷ�ΪO(n)
DNode *LocateElem(DLinkList L,int e){//��ֵ���� 
	DNode *p=L->next;
	//�ӵ�һ����㿪ʼ����������Ϊe�Ľ��
	while(p!=NULL&&p->date!=e)
		p=p->next;
	return p;//�ҵ��󷵻ظý��ָ�룬���򷵻�NULL 
}
DNode *GetElem(DLinkList L,int i){//��λ���� 
		if(i<1)
			return false;
		DNode *p;//ָ��ָ��ǰɨ�赽�Ľ�� 
		int j=0;//��ǰpָ����ǵڼ������ 
		p=L;//Lָ��ͷ�ڵ㣬ͷ�ڵ��ǵ�0���ڵ㣨���洢���ݣ� 
	while(p!=NULL&&j<i-1){//ѭ���ҵ���i-1����� 
		p=p->next;
		j++;
	}
	return p;
} 
int main()
{
	
	return 0;
 }

