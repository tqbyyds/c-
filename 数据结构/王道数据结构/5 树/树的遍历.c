#include<stdio.h>
//�����ȸ�����
//�����ǿ� �ȷ��ʸ��ڵ� �����ζ�ÿ�����������ȸ�������������ȱ�����
void PreOrder(TreeNode *R){
	if(R!=NULL){
		visit(R);//���ʸ����
		while(/*R������һ������T*/)
			PreOrder(T);//�ȸ�������һ������ 
	}
}
//���ĺ������ (������ȱ���)
void PostOrder(TreeNode *R){
	if(R!=NULL){
		while(/*R������һ������T*/)
			PreOrder(T);//�ȸ�������һ������
		visit(R);//���ʸ���� 
	}
}  
int main()
{ 

	return 0;
 }

