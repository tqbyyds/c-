#include<stdio.h>
void R_Print(LinkList L){
	//��β��ͷ���������L��ÿ������ֵ
	if(L->next!=NULL){
		R_Print(L->next); //�ݹ� 
	}
	if(L!=NULL) print(L->data); 
}
void R_Ignore_Head(LinkList L){
	if(L!=NULL) R_Print(L->next);//������� 
} 

int main()
{

	return 0;
 }

