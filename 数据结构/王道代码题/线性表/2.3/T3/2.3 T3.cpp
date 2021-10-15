#include<stdio.h>
void R_Print(LinkList L){
	//从尾到头输出单链表L中每个结点的值
	if(L->next!=NULL){
		R_Print(L->next); //递归 
	}
	if(L!=NULL) print(L->data); 
}
void R_Ignore_Head(LinkList L){
	if(L!=NULL) R_Print(L->next);//输出函数 
} 

int main()
{

	return 0;
 }

