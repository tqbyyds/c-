#include<stdio.h>
//边/弧 
typedef struct ArcNode{
	int adjvex;//边/弧指向哪个结点 
	struct ArcNode *next;//指向下一条弧的指针 
	//InfoType info;
}ArcNode;
//顶点
typedef struct VNode{
	VertexType data; //顶点信息
	ArcNode *first;//第一条边/弧 
}VNode,AdjList[MaxVertexNum];
//用邻接表存储的图
typedef struct{
	AdjList vertices;//顶点结点的数组 即 AdjList类型为顶点结点的数组 
	int vexnum,arcnum;//顶点和边的数量 
}ALGraph; 
int main()
{

	return 0;
 }

