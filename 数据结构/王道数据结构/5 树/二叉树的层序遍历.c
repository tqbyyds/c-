#include<stdio.h>
//�������Ľ����ʽ�洢 
typedef struct BiTNode{
	ElemType data;             //������ 
	struct BiTNode *lchild,*rchild;//���Һ���ָ�� 
}BiTNode,*BiTree;
//��ʽ���н��
typedef struct LinkNode{
	BiTNode *data;//��������ָ������ǽ�� 
	struct LinkNode *next;
}LinkNode; 
typedef struct{
	LinkNode *front,*rear;//��ͷ��β 
}LinkQueue;
//�������
void LevelOrder(BiTree T){
	LinkQueue Q;
	InitQueue(Q);//��ʼ����������
	BitTree p;//���ڴ������Ԫ�صĵ�ַ 
	while(!IsEmpty(Q)){
		DeQueue(Q,p);
		visit (p);
		if(p->lchild!=NULL)
			EnQueue(Q,p->lchild);//�������
		if(p->rchild!=NULL)
			EnQueue(Q,p->rchild);//�Һ������ 
	} 
} 
int main()
{

	return 0;
 }

