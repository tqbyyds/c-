#include<stdio.h>
//�������������� 
//�Һ�� 
//�ҵ���pΪ���������У���һ������������Ľ��
ThreadNode* FirstNode(ThreadNode*p){
	//ѭ���ҵ������½�㣨��һ����Ҷ��㣩
	while(p->rtag==0)
		p=p->lchild;
	return p; 
}
//�������������������ҵ����p�ĺ�̽��
ThreadNode* Nextnode(ThreadNode*p){
	//�������������½��
 	if(p->rtag==0) return Firstnode(p->rchild);
	else return p->rchild;//rtag==1ֱ�ӷ��غ������  
}
//�������������������������������������ʵ�ֵķǵݹ��㷨�� 
void Inorder(ThreadNode *T){
	for(Thread *p=Firstnode(T);p!=NULL;p=Nextnode(p))
		visit(p);
} 
//��ǰ�� 
//�ҵ���pΪ���������У����һ������������Ľ��
ThreadNode* LastNode(ThreadNode*p){
	//ѭ���ҵ������½�㣨��һ����Ҷ��㣩
	while(p->ltag==0)
		p=p->rchild;
	return p; 
}
//�������������������ҵ����p��ǰ�����
ThreadNode* Prenode(ThreadNode*p){
	//�������������½��
 	if(p->ltag==0) return Lastnode(p->lchild);
	else return p->lchild;//ltag==1ֱ�ӷ���ǰ������  
}
//�������������������������������
void RevInorder(ThreadNode *T){
	for(Thread *p=Lastnode(T);p!=NULL;p=Prenode(p))
		visit(p);
}
 


int main()
{

	return 0;
 }

