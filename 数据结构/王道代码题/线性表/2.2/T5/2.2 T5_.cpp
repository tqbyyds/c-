#include<stdio.h>
#define MaxSize 50
typedef struct{
	int data [MaxSize];//˳����Ԫ��  
	int length;//˳���ǰ�ĳ��� 
} Sqlist;//˳�������Ͷ���
bool del_x_2(Sqlist *L,int s,int t){
	if(L->length==0||s>=t)
		return false; 
	int k=0;int i=0;
	s--;
	t++;
	while(i<L->length){//k��¼ֵa��b֮���Ԫ�صĸ��� 
		if(L->data[i]>s&&L->data[i]<t)
			k++;
		else
			L->data[i-k]=L->data[i];//��ǰԪ��ǰ��k��λ�� 
		i++;
	}
	L->length=L->length-k;//˳���ĳ��ȵݼ� 
	return true; 
} 
int main()
{
	Sqlist L;
	L.data[0]=6;
	L.data[1]=4;
	L.data[2]=7;
	L.data[3]=5;
	L.data[4]=2;
	L.data[5]=8;
	L.data[6]=7;
	L.length=7;
	del_x_2(&L,3,6);
	int i;
	for(i=0;i<L.length;i++)
		printf("%d\n",L.data[i]);
		
	return 0;
 }

