#include<stdio.h>
#define MaxSize 50//�������Ա����󳤶� 
typedef struct{
	int data [MaxSize];//˳����Ԫ��  
	int length;//˳���ǰ�ĳ��� 
} Sqlist;//˳�������Ͷ���
void del_x_2(Sqlist *L,int x){
	int k=0;int i=0;
	while(i<L->length){//k��¼ֵ����x��Ԫ�صĸ��� 
		if(L->data[i]==x)
			k++;
		else
			L->data[i-k]=L->data[i];//��ǰԪ��ǰ��k��λ�� 
		i++;
	}
	L->length=L->length-k;//˳���ĳ��ȵݼ� 
} 
int main()
{
    Sqlist L;
	L.data[0]=3;
	L.data[1]=6;
	L.data[2]=0;
	L.data[3]=7;
	L.data[4]=6;
	L.length=5;
	del_x_2(&L,6);
	int i=0;
	for(i=0;i<=L.length-1;i++){
		printf("%d\n",L.data[i]);
	}
	return 0;
 }

