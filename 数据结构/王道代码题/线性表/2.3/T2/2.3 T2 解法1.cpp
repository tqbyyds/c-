#include<stdio.h>
void Del_x(LinkList &L,int x){
	//LΪ��ͷ���ĵ����� ���㷨ɾ��L������ֵΪx�Ľ��
	LNode *p=L->next,*pre=L,*q;//��p��pre�ĳ�ʼֵ 
	while(p!=NULL){
		if(p->data==x){
			q=p;    //qָ��ý�� 
			p=p->next;
			pre->next=p; 
			//ɾ��*q��� 
			free(q);//�ͷ�*q���Ŀռ� 
		}
		else{ //���� pre��pͬ������ 
			pre=p;
			p=p->next;
		}
	}
} 
int main()
{

	return 0;
 }

