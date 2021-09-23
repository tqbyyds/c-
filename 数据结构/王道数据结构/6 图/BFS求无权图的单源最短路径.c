#include<stdio.h>
bool visited[MAX_VERTEX_NUM];//访问标记数组 
void BFS_MIN_Distance(Graph G,int u){
	//d[i]表示从u到i结点的最短路径
	for(i=0;i<G.vexnum;++i){
		visited[i]=FALSE;//访问标记数组初始化
		d[i]=无穷;//初始化路径长度
		path[i]=-1;//最短路径从哪个顶点来	
	}
	InitQueue(Q);//初始化辅助队列Q
	d[u]=0; 
	visited[u]=TRUE;//对u做已访问标记 
	Enqueue(Q,u);//顶点v入队列Q 
	while(!isEmpty(Q)){//BFS算法主过程 
		DeQueue(Q,u);//队头元素出队并置为u
		for(w=FirstNeighbor(G,u);w>=0;w=NextNeighbor(G,u,w))
			if(!visited[w]){//w为v的尚未访问的邻接顶点 
				d[w]=d[u]+1;
				path[w]=u; 
				visited[w]=TRUE;//对w做已访问标记 
				EnQueue(Q,W);//顶点w入队列 
			} 
	}
} 
int main()
{

	return 0;
 }

