#include<stdio.h>
typedef struct LNode{ //���嵥����ڵ����� 
	int data;		//ÿ���ڵ���һ������Ԫ�� 
	struct LNode *next;//ָ��ָ����һ���ڵ� 
}LNode, *LinkList;
bool InitList(LinkList L){
	L=NULL; //�ձ���ʱ��û���κνڵ� 
	return ture; 
} 
bool Empty(LinkList L){//�жϵ������Ƿ�Ϊ�� 
	return (L==NULL);
} 
int main()
{
	
	return 0;
 }

