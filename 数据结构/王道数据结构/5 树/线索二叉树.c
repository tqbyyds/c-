//线索二叉树的结点（链式存储）
typedef struct ThreadNode{
	ElemType data;
	struct ThreadNode *lchild,*rchild;
	int ltag,rtag;//左右线索标志 
}ThreadNode,*ThreadTree;
 //土办法找到中序前驱
 //辅助全局变量 用于查找结点p的前驱
 BinTNode *p; //p指向目标结点
 BinTNode *pre=NULL;//指向当前访问结点的前驱
 BinTNode *final=NULL; //用于记录最终结果
 //中序遍历
 void findpre(BiTree T){
 	if(T!=NULL){
 		findpre(T->lchild);//递归遍历左子树
		visit(T);//访问根节点
		findpre(T->rchild); //递归遍历右子树 
	 }
 }
 void visit(BiTNode *q){
 	if(q==p)//当前访问结点刚好是结点p
	 final=pre;//找到p的前驱
	else
		pre=q;//pre指向当前访问的结点 
 }
 //中序线索化
 //中序遍历二叉树 一边遍历一边线索化 
 void InThread(ThreadTree T){
 	if(T!=NULL){
 		findpre(T->lchild);//递归遍历左子树
		visit(T);//访问根节点
		findpre(T->rchild); //递归遍历右子树  		
	 }
 }
 void visit(ThreadNode *q){
 	if(q->lchild==NULL){//左子树为空，建立前驱线索
	 	q->lchild=pre;
		 q->ltag=1; 
	 }
	 if(pre!=NULL&&pre->rchild==NULL){
	 	pre->rchild=q; //建立前驱结点的后继结点
		pre->rtag=1; 
	 }
	 pre=q;
 }
 //中序线索化二叉树T
 void CreateInThread(ThreadTree T){
 	pre=NULL//pre初始为Null
	if(T!=NULL){//非空二叉树才能线索化
    InThread(T);//中序线索化二叉树
	if(pre->rchild==NULL)
	 	pre->rtag=1;//处理遍历的最后一个结点 
		
	} 
 }
//先序线索化
//先序遍历二叉树，一边遍历一边线索化
//注意爱的魔力转圈圈
 void InThread(ThreadTree T){
 	if(T!=NULL){
 		visit(T);//访问根节点
		if(T!=NULL)//lchild不是前驱线索 
			findpre(T->lchild);//递归遍历左子树
		findpre(T->rchild); //递归遍历右子树  		
	 }
 }
 void visit(ThreadNode *q){
 	if(q->lchild==NULL){//左子树为空，建立前驱线索
	 	q->lchild=pre;
		 q->ltag=1; 
	 }
	 if(pre!=NULL&&pre->rchild==NULL){
	 	pre->rchild=q; //建立前驱结点的后继结点
		pre->rtag=1; 
	 }
	 pre=q;
 }
 //先序线索化二叉树T
 void CreateInThread(ThreadTree T){
 	pre=NULL//pre初始为Null
	if(T!=NULL){//非空二叉树才能线索化
    InThread(T);//中序线索化二叉树
	if(pre->rchild==NULL)
	 	pre->rtag=1;//处理遍历的最后一个结点 
		
	} 
 }
  //后序线索化
 //后序遍历二叉树 一边遍历一边线索化 
 void InThread(ThreadTree T){
 	if(T!=NULL){
 		findpre(T->lchild);//递归遍历左子树
		findpre(T->rchild); //递归遍历右子树
		visit(T);//访问根节点  		
	 }
 }
 void visit(ThreadNode *q){
 	if(q->lchild==NULL){//左子树为空，建立前驱线索
	 	q->lchild=pre;
		 q->ltag=1; 
	 }
	 if(pre!=NULL&&pre->rchild==NULL){
	 	pre->rchild=q; //建立前驱结点的后继结点
		pre->rtag=1; 
	 }
	 pre=q;
 }
 //后序线索化二叉树T
 void CreateInThread(ThreadTree T){
 	pre=NULL//pre初始为Null
	if(T!=NULL){//非空二叉树才能线索化
    InThread(T);//后序线索化二叉树
	if(pre->rchild==NULL)
	 	pre->rtag=1;//处理遍历的最后一个结点 
		
	} 
 }
  
#include<stdio.h>
int main()
{

	return 0;
 }

