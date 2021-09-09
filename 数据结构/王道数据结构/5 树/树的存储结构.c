#include<stdio.h>
//双亲表示法（顺序存储）：每个结点中保存指向双亲的指针（不是真正意义上的指针，其实是数组的编号）
#define Max_TREE_SIZE 100 //树中最多结点数
typedef struct{//树的结点定义 
	ElemType data;//数据元素 
	int parent;//双亲位置域 
}PTNode;
typedef struct{//树的类型定义 
	PTNode nodes[Max_TREE_SIZE];//双亲表示 
	int n; //结点数 
}PTree;
//孩子表示法（顺序+链式存储）
struct CTNode{
	int child;//孩子结点在数组中的位置
	struct CTNode *next;//下一个孩子 
};
typedef struct{
	ElemType data;
	struct CTNode *firstChild;//第一个孩子 
}CTBox;
typedef struct{
	CTBox nodes[Max_TREE_SIZE];
	int n,r;//结点数和根的位置 
}CTree;
//树的存储-孩子兄弟表示法（链式存储法） 树和二叉树转换的方法 
typedef struct CSNode{
	ElemType data;//数据域 
	struct CSNode *firstchild,*nextsibling;//第一个孩子和右兄弟（孩子的右兄弟）指针
	               //二叉链表 
}CSNode,*CSTree; 
int main()
{

	return 0;
 }

