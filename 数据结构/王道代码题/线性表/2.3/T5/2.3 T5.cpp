#include<stdio.h>
LinkList Reverse _1(LinkList L){
	//L�Ǵ�ͷ�ڵ�ĵ����� ���㷨��L�͵�����
	LNode *p,*r;//pΪ����ָ�� rΪp�ĺ�� �Է�����
	p=L->next;//�ӵ�һ��Ԫ�ؽ�㿪ʼ 
	L->next=NULL;//�Ƚ�ͷ����L��next����ΪNULL 
	while(p!=NULL){//���ν�Ԫ�ؽ��ժ�� 
		r=p->next;//�ݴ�p�ĺ�� 
		p->next=L->next;//��p�����뵽ͷ���֮�� 
		L->next=p;
		p=r;
	}
	return L; 
} 
int main()
{

	return 0;
 }

