#include<stdio.h>
//ƽ����������
typedef struct AVLNode{
	int key; //������
	int balance;//ƽ������
	struct AVLNode *lchild,*rchild; 
}AVLNode,*AVLTree;
//������С��ƽ������
//ʵ��f��������ת p��������ת��ֻ�����Ӳ���������ת�� ����fʱ�� pΪ���� gfΪf����
/*
f->lchild=p->rchild;
p->rchild=f;
gf->lchild/rchild=p;
f��������תʱͬ�� 
*/
  
int main()
{

	return 0;
 }

