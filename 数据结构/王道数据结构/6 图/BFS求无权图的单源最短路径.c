#include<stdio.h>
bool visited[MAX_VERTEX_NUM];//���ʱ������ 
void BFS_MIN_Distance(Graph G,int u){
	//d[i]��ʾ��u��i�������·��
	for(i=0;i<G.vexnum;++i){
		visited[i]=FALSE;//���ʱ�������ʼ��
		d[i]=����;//��ʼ��·������
		path[i]=-1;//���·�����ĸ�������	
	}
	InitQueue(Q);//��ʼ����������Q
	d[u]=0; 
	visited[u]=TRUE;//��u���ѷ��ʱ�� 
	Enqueue(Q,u);//����v�����Q 
	while(!isEmpty(Q)){//BFS�㷨������ 
		DeQueue(Q,u);//��ͷԪ�س��Ӳ���Ϊu
		for(w=FirstNeighbor(G,u);w>=0;w=NextNeighbor(G,u,w))
			if(!visited[w]){//wΪv����δ���ʵ��ڽӶ��� 
				d[w]=d[u]+1;
				path[w]=u; 
				visited[w]=TRUE;//��w���ѷ��ʱ�� 
				EnQueue(Q,W);//����w����� 
			} 
	}
} 
int main()
{

	return 0;
 }

