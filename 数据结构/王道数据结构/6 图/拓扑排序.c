#include<stdio.h>
bool TopologicalSort(Graph G){
	InitStack(S);//��ʼ��ջ  �洢���Ϊ0�Ķ��� 
	for(int i=0;i<G.vexnum;i++)
		if(indegree[i]==0)
			Push(S,i);//���������Ϊ0�Ķ����ջ 
	int count=0;//���� ��¼��ǰ�Ѿ�����Ķ����� 
while(!IsEmpty(S)){//ջ���գ���������Ϊ0�Ķ��� 
	Pop(S,i);//ջ��Ԫ�س�ջ 
	print[count++]=i;//�������i 
	for(P=G.vertices[i].firstarc;P;P=P->nextarc){
		//������iָ��Ķ�����ȼ�һ�����ҽ����Ϊ0�Ķ���ѹ��ջS 
		v=P->adjvex;
		if(!(--indegree[v]))
		Push(S,v);//���Ϊ0������ջ 
	}
}
if(count<G.vexnum)
	return false;//����ʧ�ܣ�����ͼ���л�· 
else
	return true;//��������ɹ� 
}
	
int main()
{

	return 0;
 }

