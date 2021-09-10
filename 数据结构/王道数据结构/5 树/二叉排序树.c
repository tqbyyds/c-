#include<stdio.h>
//�������������
typedef struct BSTNode{
	int key;
	struct BSTNode *lchild,*rchild;
}BSTNode,*BSTree;
//�ڶ����������в���ֵΪkey�Ľ��
BSTNode *BST_Search(BSTree T,int key){
	while(T!=NULL&&key!=T->key){//�����ջ���ڸ����ֵ�������ѭ�� 
		if(key<T->key) T=T->lchild;//С�������������ϲ���
		else T=T->rchild;         //���������������ϲ���
	}
	return T;
}
//�ڶ����������в���ֵΪkey�Ľ�㣨�ݹ�ʵ�֣�
BSTNode *BSTSearch(BSTree T,int key){
	if(T==NULL)
		return NULL;//����ʧ��
	if(key==T->key)
		return T;//���ҳɹ�
	else if(key<T->lchild,key);//������������
		return BSTSearch(T->lchild,key);//������������
	else
		return BSTSearch(T->rchild,key);//������������ 
}
//�ڶ�������������ؼ���Ϊk���½�㣨�ݹ�ʵ�֣� 
int BST_Insert(BSTree &T,int k){
	if(T==NULL){ //ԭ��Ϊ�� �²���Ľ��Ϊ����� 
		T=(BSTree)malloc(sizeof(BSTNode));
		T->key=K;
		T->lchild=T->rchild=NULL;
		return 1;//����1 ����ɹ� 
	}
	else if(k==T->key)//���д�����ͬ�ؼ��ֵĽ�� ����ʧ�� 
		return 0;
	else if(k->key) //���뵽T�������� 
		return BST_Insert(T->lchild,k);
	else
		return BST_Insert(T->lchild,k);
}
//����str[]�еĹؼ������н�������������
void Creat_BST(BSTree &T,int str[],int n){
	T=NULL; //��ʼʱTΪ����
	int i=0;
	while(i<n){
		BST_Insert(T,str[i]);
		i++;//���ν�ÿ���ؼ��ֲ��뵽������������ 
	} 
} 
int main()
{

	return 0;
 }

