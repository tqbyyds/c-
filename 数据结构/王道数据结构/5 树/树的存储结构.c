#include<stdio.h>
//˫�ױ�ʾ����˳��洢����ÿ������б���ָ��˫�׵�ָ�루�������������ϵ�ָ�룬��ʵ������ı�ţ�
#define Max_TREE_SIZE 100 //�����������
typedef struct{//���Ľ�㶨�� 
	ElemType data;//����Ԫ�� 
	int parent;//˫��λ���� 
}PTNode;
typedef struct{//�������Ͷ��� 
	PTNode nodes[Max_TREE_SIZE];//˫�ױ�ʾ 
	int n; //����� 
}PTree;
//���ӱ�ʾ����˳��+��ʽ�洢��
struct CTNode{
	int child;//���ӽ���������е�λ��
	struct CTNode *next;//��һ������ 
};
typedef struct{
	ElemType data;
	struct CTNode *firstChild;//��һ������ 
}CTBox;
typedef struct{
	CTBox nodes[Max_TREE_SIZE];
	int n,r;//������͸���λ�� 
}CTree;
//���Ĵ洢-�����ֵܱ�ʾ������ʽ�洢���� ���Ͷ�����ת���ķ��� 
typedef struct CSNode{
	ElemType data;//������ 
	struct CSNode *firstchild,*nextsibling;//��һ�����Ӻ����ֵܣ����ӵ����ֵܣ�ָ��
	               //�������� 
}CSNode,*CSTree; 
int main()
{

	return 0;
 }

