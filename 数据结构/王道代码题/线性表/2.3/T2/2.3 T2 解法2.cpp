#include<stdio.h>
void Del_x(LinkList &L,int x){
	//LΪ��ͷ��㵥���� ���㷨ɾ��L������ֵΪx�Ľ��
	LNode *P=L->next,*r=L,*q;//rָ��β��� ���ʼֵΪͷ��� 
	while(P!=NULL){
		if(P->data!=x){//*P���ֵ��Ϊxʱ�������ӵ�Lβ�� 
			r->next=P;
			r=P;
			P=P->next; //����ɨ�� 
		}
		else{//*p���ֵΪxʱ�����ͷ� 
			q=p;
			p=p->next;//����ɨ�� 
			free(q);//�ͷſռ� 
		}
	}
	r->next=NULL; 
} 
int main()
{

	return 0;
 }

