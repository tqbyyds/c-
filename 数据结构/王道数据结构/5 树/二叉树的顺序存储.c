#include<stdio.h>
#define MaxSize 100 
struct TreeNode{
	ElemType value;//结点中的数据元素
	bool isEmpty; //结点是否为空 
}; //完全二叉数 
TreeNode t[MaxSize];
//定义一个长度为MaxSize的数组t,按照从上至下 从左至右的顺序依次存储完全二叉树中的各个结点
for(int =0;i<MaxSize;i++){
	t[i].isEmpty=true;
}                       //常考基本操作 i的左孩子 --2i  i的右孩子--2i+1 i的父结点 向下取整(i/2 )
                        //i所在的层次。。。。。 
int main()
{

	return 0;
 }

