#include<stdio.h>
bool visited[MAX_VERTEX_NUM];//访问标记数组 
void BFSTraverse(Graph G){// 对图G进行广度优先遍历 
	for(i=0;i<G.vexnum;++i)
	 visited[i]=FALSE;//访问标记数组初始化 
	InitQueue(Q);//初始化辅助队列Q 
	for(i=0;i<G.vexnum;++i)//从0号顶点开是遍历 
		if(!visited[i])//对每个连通分量调用一次BFS 
			BFS(G,i); //vi未访问过 从vi开始BFS 
}
//广度优先遍历
void BFS(Graph G,int v){//从顶点v出发 广度优先遍历图G 
	visit(v);//访问初始顶点v 
	visited[v]=TRUE;//对v做已访问标记 
	Enqueue(Q,v);//顶点v入队列Q 
	while(!isEmpty(Q)){
		DeQueue(Q,u);//队头元素出队并置为u//
		 /*
bool DeQueue(SqQueue *Q,int *x){
	if(Q->rear==Q->front)
		return false; //队空则报错
	x=Q->data[Q->front];
	Q->front=(Q->front+1)%MaxSize 
	return true;
}*/ 
		for(w=FirstNeighbor(G,u);w>=0;w=NextNeighbor(G,u,w))
			if(!visited[w]){//w为v的尚未访问的邻接顶点 
				visited(w);//访问顶点w 
				visited[w]=TRUE;//对w做已访问标记 
				EnQueue(Q,W);//顶点w入队列 
			} 
	}
} 
int main()
{

	return 0;
 }

