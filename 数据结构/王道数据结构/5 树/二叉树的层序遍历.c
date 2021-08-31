#include<stdio.h>
//二叉树的结点链式存储 
typedef struct BiTNode{
	ElemType data;             //数据域 
	struct BiTNode *lchild,*rchild;//左右孩子指针 
}BiTNode,*BiTree;
//链式队列结点
typedef struct LinkNode{
	BiTNode *data;//这里存的是指针而不是结点 
	struct LinkNode *next;
}LinkNode; 
typedef struct{
	LinkNode *front,*rear;//队头队尾 
}LinkQueue;
//层序遍历
void LevelOrder(BiTree T){
	LinkQueue Q;
	InitQueue(Q);//初始化辅助队列
	BitTree p;//用于储存出队元素的地址 
	while(!IsEmpty(Q)){
		DeQueue(Q,p);
		visit (p);
		if(p->lchild!=NULL)
			EnQueue(Q,p->lchild);//左孩子入队
		if(p->rchild!=NULL)
			EnQueue(Q,p->rchild);//右孩子入队 
	} 
} 
int main()
{

	return 0;
 }

