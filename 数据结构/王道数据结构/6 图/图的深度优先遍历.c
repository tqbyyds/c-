#include<stdio.h>
bool visited[MAX_VERTEX_NUM];//���ʱ������ 
void DFSTraverse(Graph G){// ��ͼG����������ȱ��� 
	for(v=0;v<G.vexnum;++v)
	 visited[v]=FALSE;//���ʱ�������ʼ�� 
	for(v=0;v<G.vexnum;++v)//��0�Ŷ��㿪�Ǳ��� 
		if(!visited[v])//��ÿ����ͨ��������һ��DFS 
			DFS(G,v); //vδ���ʹ� ��v��ʼDFS 
}
void DFS(Graph,int v){//�Ӷ���v���� ������ȱ���ͼG 
	visit(v);//���ʶ���v 
	visited[v]=TRUR;//�����ѷ��ʱ�� 
	for(w=FirstNeighbor(G,u);w>=0;w=NextNeighbor(G,u,w))
		if(!visited[w]){//wΪv����δ���ʵ��ڽӶ��� 
			DFS(G,W);
		}
}
int main()
{

	return 0;
 }

