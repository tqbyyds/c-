#include<stdio.h>
typedef enum{
	ATOM,LIST
}ElemTag;//ATOM==0 ԭ�� LIST==1 �ӱ�
typedef struct GLNode{//�������� ��������ԭ�ӽ��ͱ��� 
	ElemTag tag;
	union{//ԭ�ӽ��ͱ�������ϲ��� 
		AtomType atom;//ԭ�ӽ���ֵ�� 
		struct GLNode *hp;//����ı�ͷָ�� 
	};
	struct GLNode *tp;//�൱�����������next ָ����һ��Ԫ�ؽ�� 
}*GList; //���������GList��һ����չ���������� 
int main()
{

	return 0;
 }

