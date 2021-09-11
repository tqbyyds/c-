#include<stdio.h>
//平衡二叉树结点
typedef struct AVLNode{
	int key; //数据域
	int balance;//平衡因子
	struct AVLNode *lchild,*rchild; 
}AVLNode,*AVLTree;
//调整最小不平衡子树
//实现f向右下旋转 p向右上旋转（只有左孩子才能右上旋转） 其中f时爹 p为左孩子 gf为f他爹
/*
f->lchild=p->rchild;
p->rchild=f;
gf->lchild/rchild=p;
f向左下旋转时同理 
*/
  
int main()
{

	return 0;
 }

