#include<stdio.h>
//����
typedef struct VNode{
	int data; //������Ϣ
	int *first;//��һ����/�� 
}AdjList[10];
//���ڽӱ�洢��ͼ
typedef struct{
	AdjList vertices;//����������� �� AdjList����Ϊ����������� 
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

