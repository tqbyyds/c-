#include<stdio.h>
typedef struct LNode{ //���嵥����ڵ����� 
	int data;		//ÿ���ڵ���һ������Ԫ�� 
	struct LNode *next;//ָ��ָ����һ���ڵ� 
}LNode, *LinkList;
bool InitList(LinkList *L){//����һ��ͷ�ڵ� 
	L=(LNode *)malloc(sizeof(LNode));
		if(L==NULL)
			return false;//�ڴ治�����ʧ�� 
		L->next=L;//ͷ�ڵ�nextָ��ͷ�ڵ� 
		return true;
}
bool isTail(LinkList L,LNode *p){//�жϽ��p�Ƿ�Ϊѭ��������ı�β��� 
	if(p->next==L)
		return true;
	else
		return false;
} 
int main()
{

	return 0;
 }

