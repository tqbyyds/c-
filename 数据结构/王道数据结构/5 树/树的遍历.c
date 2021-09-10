#include<stdio.h>
//树的先根遍历
//若树非空 先访问根节点 再依次对每颗子树进行先根遍历（深度优先遍历）
void PreOrder(TreeNode *R){
	if(R!=NULL){
		visit(R);//访问根结点
		while(/*R还有下一个子树T*/)
			PreOrder(T);//先根遍历下一棵子树 
	}
}
//树的后根遍历 (深度优先遍历)
void PostOrder(TreeNode *R){
	if(R!=NULL){
		while(/*R还有下一个子树T*/)
			PreOrder(T);//先根遍历下一棵子树
		visit(R);//访问根结点 
	}
}  
int main()
{ 

	return 0;
 }

