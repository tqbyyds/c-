#include<stdio.h>
//中序线索二叉树 
//找后继 
//找到以p为根的子树中，第一个被中序遍历的结点
ThreadNode* FirstNode(ThreadNode*p){
	//循环找到最左下结点（不一定是叶结点）
	while(p->rtag==0)
		p=p->lchild;
	return p; 
}
//在中序线索二叉树中找到结点p的后继结点
ThreadNode* Nextnode(ThreadNode*p){
	//右子树中最左下结点
 	if(p->rtag==0) return Firstnode(p->rchild);
	else return p->rchild;//rtag==1直接返回后继线索  
}
//对中序线索二叉树进行中序遍历（利用线索实现的非递归算法） 
void Inorder(ThreadNode *T){
	for(Thread *p=Firstnode(T);p!=NULL;p=Nextnode(p))
		visit(p);
} 
//找前驱 
//找到以p为根的子树中，最后一个被中序遍历的结点
ThreadNode* LastNode(ThreadNode*p){
	//循环找到最右下结点（不一定是叶结点）
	while(p->ltag==0)
		p=p->rchild;
	return p; 
}
//在中序线索二叉树中找到结点p的前驱结点
ThreadNode* Prenode(ThreadNode*p){
	//左子树中最右下结点
 	if(p->ltag==0) return Lastnode(p->lchild);
	else return p->lchild;//ltag==1直接返回前驱线索  
}
//对中序线索二叉树进行逆向中序遍历
void RevInorder(ThreadNode *T){
	for(Thread *p=Lastnode(T);p!=NULL;p=Prenode(p))
		visit(p);
}
 


int main()
{

	return 0;
 }

