#include<stdio.h>
typedef struct StackNode
{
	ElemType data;
	struct StackNode *next;
 }StackNode,*LinkStack
 bool InitStack(LinkStack &S){
 	//����һ����ջS��ջ��ָ���ÿ�
 	S=NULL;
 	return true;	
 }
 bool Push(LinkStack &S,SElemType e){
 	//��ջ������Ԫ��e
 	StackNode* p=(StackNode *)malloc(sizeof(StackNode));
 	p->data=e;
 	p->next=S;
 	S=p;
 	return true;
 }
 bool Pop(LinkStack &S,SElemType &e){
 	//ɾ��S��ջ��Ԫ�� ��e������ֵ
	 if(S==NULL)return false;
	 e=S->data;//��ջ��Ԫ�ظ���e
	 p=S;//��P��ʱ����ջ��Ԫ�ؿռ� �Ա��ͷ�
	 S=S->next;//�޸�ջ��ָ��
	 free(p);
	 return true; 
 }
SELemType GetTop(LinkStack S){
	if(S!=NULL)//ջ�ǿ�
		return S->data;//����ջ��Ԫ�ص�ֵ ջ��ָ�벻�� 
} 
	 
int main()
{

	return 0;
 }

