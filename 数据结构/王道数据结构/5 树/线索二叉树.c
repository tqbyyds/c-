//�����������Ľ�㣨��ʽ�洢��
typedef struct ThreadNode{
	ElemType data;
	struct ThreadNode *lchild,*rchild;
	int ltag,rtag;//����������־ 
}ThreadNode,*ThreadTree;
 //���취�ҵ�����ǰ��
 //����ȫ�ֱ��� ���ڲ��ҽ��p��ǰ��
 BinTNode *p; //pָ��Ŀ����
 BinTNode *pre=NULL;//ָ��ǰ���ʽ���ǰ��
 BinTNode *final=NULL; //���ڼ�¼���ս��
 //�������
 void findpre(BiTree T){
 	if(T!=NULL){
 		findpre(T->lchild);//�ݹ����������
		visit(T);//���ʸ��ڵ�
		findpre(T->rchild); //�ݹ���������� 
	 }
 }
 void visit(BiTNode *q){
 	if(q==p)//��ǰ���ʽ��պ��ǽ��p
	 final=pre;//�ҵ�p��ǰ��
	else
		pre=q;//preָ��ǰ���ʵĽ�� 
 }
 //����������
 //������������� һ�߱���һ�������� 
 void InThread(ThreadTree T){
 	if(T!=NULL){
 		findpre(T->lchild);//�ݹ����������
		visit(T);//���ʸ��ڵ�
		findpre(T->rchild); //�ݹ����������  		
	 }
 }
 void visit(ThreadNode *q){
 	if(q->lchild==NULL){//������Ϊ�գ�����ǰ������
	 	q->lchild=pre;
		 q->ltag=1; 
	 }
	 if(pre!=NULL&&pre->rchild==NULL){
	 	pre->rchild=q; //����ǰ�����ĺ�̽��
		pre->rtag=1; 
	 }
	 pre=q;
 }
 //����������������T
 void CreateInThread(ThreadTree T){
 	pre=NULL//pre��ʼΪNull
	if(T!=NULL){//�ǿն���������������
    InThread(T);//����������������
	if(pre->rchild==NULL)
	 	pre->rtag=1;//������������һ����� 
		
	} 
 }
//����������
//���������������һ�߱���һ��������
//ע�Ⱞ��ħ��תȦȦ
 void InThread(ThreadTree T){
 	if(T!=NULL){
 		visit(T);//���ʸ��ڵ�
		if(T!=NULL)//lchild����ǰ������ 
			findpre(T->lchild);//�ݹ����������
		findpre(T->rchild); //�ݹ����������  		
	 }
 }
 void visit(ThreadNode *q){
 	if(q->lchild==NULL){//������Ϊ�գ�����ǰ������
	 	q->lchild=pre;
		 q->ltag=1; 
	 }
	 if(pre!=NULL&&pre->rchild==NULL){
	 	pre->rchild=q; //����ǰ�����ĺ�̽��
		pre->rtag=1; 
	 }
	 pre=q;
 }
 //����������������T
 void CreateInThread(ThreadTree T){
 	pre=NULL//pre��ʼΪNull
	if(T!=NULL){//�ǿն���������������
    InThread(T);//����������������
	if(pre->rchild==NULL)
	 	pre->rtag=1;//������������һ����� 
		
	} 
 }
  //����������
 //������������� һ�߱���һ�������� 
 void InThread(ThreadTree T){
 	if(T!=NULL){
 		findpre(T->lchild);//�ݹ����������
		findpre(T->rchild); //�ݹ����������
		visit(T);//���ʸ��ڵ�  		
	 }
 }
 void visit(ThreadNode *q){
 	if(q->lchild==NULL){//������Ϊ�գ�����ǰ������
	 	q->lchild=pre;
		 q->ltag=1; 
	 }
	 if(pre!=NULL&&pre->rchild==NULL){
	 	pre->rchild=q; //����ǰ�����ĺ�̽��
		pre->rtag=1; 
	 }
	 pre=q;
 }
 //����������������T
 void CreateInThread(ThreadTree T){
 	pre=NULL//pre��ʼΪNull
	if(T!=NULL){//�ǿն���������������
    InThread(T);//����������������
	if(pre->rchild==NULL)
	 	pre->rtag=1;//������������һ����� 
		
	} 
 }
  
#include<stdio.h>
int main()
{

	return 0;
 }

