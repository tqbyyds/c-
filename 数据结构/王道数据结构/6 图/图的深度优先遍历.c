#include<stdio.h>
bool visited[MAX_VERTEX_NUM];//访问标记数组 
void DFSTraverse(Graph G){// 对图G进行深度优先遍历 
	for(v=0;v<G.vexnum;++v)
	 visited[v]=FALSE;//访问标记数组初始化 
	for(v=0;v<G.vexnum;++v)//从0号顶点开是遍历 
		if(!visited[v])//对每个连通分量调用一次DFS 
			DFS(G,v); //v未访问过 从v开始DFS 
}
void DFS(Graph,int v){//从顶点v出发 深度优先遍历图G 
	visit(v);//访问顶点v 
	visited[v]=TRUR;//设置已访问标记 
	for(w=FirstNeighbor(G,u);w>=0;w=NextNeighbor(G,u,w))
		if(!visited[w]){//w为v的尚未访问的邻接顶点 
			DFS(G,W);
		}
}
int main()
{

	return 0;
 }

