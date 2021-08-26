#include<stdio.h>
//二叉树的结点链式存储 
typedef struct BiTNode{
	ElemType data;             //数据域 
	struct BiTNode *lchild,*rchild;//左右孩子指针 
}BiTNode,*BiTree; 
//三叉链表 方便查找父节点 
typedef struct BiTNode{
	ElemType data;             //数据域 
	struct BiTNode *lchild,*rchild;//左右孩子指针 
	struct BiTNode *parent;//父节点指针 
}BiTNode,*BiTree; 
//定义一颗空树
BiTree root=NULL;
//插入根节点
root=(BiTree)malloc(sizeof(BiTNode));
root->data ={1};
root->lchild=NULL;
root->rchild=NULL;
//插入新结点
BiTNode *p= (BiTree)malloc(sizeof(BiTNode));
root->data ={2};
root->lchild=NULL;
root->rchild=NULL;
root->rchild=p;//作为根节点的左孩子 
int main()
{

	return 0;
 }

