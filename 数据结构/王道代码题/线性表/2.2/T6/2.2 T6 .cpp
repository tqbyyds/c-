#include<stdio.h>
#define MaxSize 50//�������Ա����󳤶� 
typedef struct{
	int data [MaxSize];//˳����Ԫ��  
	int length;//˳���ǰ�ĳ��� 
}Sqlist;//˳�������Ͷ���
bool Delete_same(Sqlist &L){
	if(L.length==0)
		return false;
	int i,j; //i�洢��һ������ͬ��Ԫ�أ�jΪ����ָ�� 
	for(i=0,j=1;j<L.length;j++)
		if(L.data[i]!=L.data[j])//������һ������һ��Ԫ��ֵ��ͬ��Ԫ�� 
			L.data[++i]=L.data[j];//�ҵ���Ԫ��ǰ�� 
	L.length=i+1;
	return true;	
} 
int main()
{
	Sqlist L;
	L.data[0]=3;
	L.data[1]=3;
	L.data[2]=6;
	L.data[3]=6;
	L.length=4;
	Delete_same(L);
	int i=0;
	for(i=0;i<L.length;i++){
		printf("%d\n",L.data[i] );
	}    
	return 0;
 }

