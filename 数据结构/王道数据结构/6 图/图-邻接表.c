#include<stdio.h>
//��/�� 
typedef struct ArcNode{
	int adjvex;//��/��ָ���ĸ���� 
	struct ArcNode *next;//ָ����һ������ָ�� 
	//InfoType info;
}ArcNode;
//����
typedef struct VNode{
	VertexType data; //������Ϣ
	ArcNode *first;//��һ����/�� 
}VNode,AdjList[MaxVertexNum];
//���ڽӱ�洢��ͼ
typedef struct{
	AdjList vertices;//����������� �� AdjList����Ϊ����������� 
	int vexnum,arcnum;//����ͱߵ����� 
}ALGraph; 
int main()
{

	return 0;
 }

