#include<stdio.h>
#define MaxVertexNum 100 //顶点数目的最大值 
#define INFINITY//最大的int值 //宏定义常量无穷 
typedef char VertexType;//顶点的数据类型 
typedef int EdgeType;//带权图中边上权值的数据类型 
typedef struct{
	VertexType Vex[MaxVertexNum];//顶点 
	EdgeType Edge[MaxVertexNum][MaxVertexNum];//边的权 
	int vexnum,arcum;//图的当前顶点树和弧数 
}MGraph;
int main()
{
	
	return 0;
 }

