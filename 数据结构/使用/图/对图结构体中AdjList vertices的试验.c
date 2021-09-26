#include<stdio.h>
//顶点
typedef struct VNode{
	int data; //顶点信息
	int *first;//第一条边/弧 
}AdjList[10];
//用邻接表存储的图
typedef struct{
	AdjList vertices;//顶点结点的数组 即 AdjList类型为顶点结点的数组 
	int b;
}ALGraph; 
int main()
{
   ALGraph G;
   for(int i=0;i<11;i++){
   	G.vertices[i].data=(2*i+1);
   }

   int c=G.vertices[5].data;
   printf("%d",c);
	return 0;
 }

