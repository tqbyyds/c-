#include<stdio.h>
bool visited[MAX_VERTEX_NUM];//���ʱ������ 
void BFSTraverse(Graph G){// ��ͼG���й�����ȱ��� 
	for(i=0;i<G.vexnum;++i)
	 visited[i]=FALSE;//���ʱ�������ʼ�� 
	InitQueue(Q);//��ʼ����������Q 
	for(i=0;i<G.vexnum;++i)//��0�Ŷ��㿪�Ǳ��� 
		if(!visited[i])//��ÿ����ͨ��������һ��BFS 
			BFS(G,i); //viδ���ʹ� ��vi��ʼBFS 
}
//������ȱ���
void BFS(Graph G,int v){//�Ӷ���v���� ������ȱ���ͼG 
	visit(v);//���ʳ�ʼ����v 
	visited[v]=TRUE;//��v���ѷ��ʱ�� 
	Enqueue(Q,v);//����v�����Q 
	while(!isEmpty(Q)){
		DeQueue(Q,u);//��ͷԪ�س��Ӳ���Ϊu//
		 /*
bool DeQueue(SqQueue *Q,int *x){
	if(Q->rear==Q->front)
		return false; //�ӿ��򱨴�
	x=Q->data[Q->front];
	Q->front=(Q->front+1)%MaxSize 
	return true;
}*/ 
		for(w=FirstNeighbor(G,u);w>=0;w=NextNeighbor(G,u,w))
			if(!visited[w]){//wΪv����δ���ʵ��ڽӶ��� 
				visited(w);//���ʶ���w 
				visited[w]=TRUE;//��w���ѷ��ʱ�� 
				EnQueue(Q,W);//����w����� 
			} 
	}
} 
int main()
{

	return 0;
 }

