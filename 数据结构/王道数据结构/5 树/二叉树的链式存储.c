#include<stdio.h>
//�������Ľ����ʽ�洢 
typedef struct BiTNode{
	ElemType data;             //������ 
	struct BiTNode *lchild,*rchild;//���Һ���ָ�� 
}BiTNode,*BiTree; 
//�������� ������Ҹ��ڵ� 
typedef struct BiTNode{
	ElemType data;             //������ 
	struct BiTNode *lchild,*rchild;//���Һ���ָ�� 
	struct BiTNode *parent;//���ڵ�ָ�� 
}BiTNode,*BiTree; 
//����һ�ſ���
BiTree root=NULL;
//������ڵ�
root=(BiTree)malloc(sizeof(BiTNode));
root->data ={1};
root->lchild=NULL;
root->rchild=NULL;
//�����½��
BiTNode *p= (BiTree)malloc(sizeof(BiTNode));
root->data ={2};
root->lchild=NULL;
root->rchild=NULL;
root->rchild=p;//��Ϊ���ڵ������ 
int main()
{

	return 0;
 }

