#include<stdio.h>
//�������Ľ����ʽ�洢 
typedef struct BiTNode{
	ElemType data;             //������ 
	struct BiTNode *lchild,*rchild;//���Һ���ָ�� 
}BiTNode,*BiTree; 
//�������� ������Ҹ��ڵ� 
typedef struct BiTNode{
	ElemType data;             //������ 
	struct BiTNode *lchild,*rchild;//���Һ���ָ�� 
	struct BiTNode *parent;//���ڵ�ָ�� 
}BiTNode,*BiTree; 
//����һ�ſ���
BiTree root=NULL;
//������ڵ�
root=(BiTree)malloc(sizeof(BiTNode));
root->data ={1};
root->lchild=NULL;
root->rchild=NULL;
//�����½��
BiTNode *p= (BiTree)malloc(sizeof(BiTNode));
root->data ={2};
root->lchild=NULL;
root->rchild=NULL;
root->rchild=p;//��Ϊ���ڵ������ 
//�������
void PreOrder(BitTree){
	if(T!=NULL){
		vist(T);//���ʸ��ڵ� 
		PreOrder(T->lchild);//�ݹ���������� 
		PreOrder(T->rchild);//�ݹ���������� 
	}
}
//�������
void PreOrder(BitTree){
	if(T!=NULL){ 
		PreOrder(T->lchild);//�ݹ���������� 
		vist(T);//���ʸ��ڵ�
		PreOrder(T->rchild);//�ݹ���������� 
	}
}

//�������
void PreOrder(BitTree){
	if(T!=NULL){ 
		PreOrder(T->lchild);//�ݹ���������� 
		PreOrder(T->rchild);//�ݹ���������� 
		vist(T);//���ʸ��ڵ�
	}
}
//��������� 
int treeDepth(BiTree T){
	if(T==NULL){
		return 0;
	}
	else{
		int l=treeDepth(T->lchild);
		int r=treeDepth(T->rchild);//�������=Max(��������ȣ����������)+1
		return l>r?l+1:r+1; 
			}
} 

int main()
{

	return 0;
 }

