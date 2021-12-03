#include<stdio.h>
#define MaxSize 50//定义线性表的最大长度 
typedef struct{
	int data [MaxSize];//顺序表的元素  
	int length;//顺序表当前的长度 
} Sqlist;//顺序表的类型定义	
 void invert(Sqlist &L){
	int i=0;int j=L.length-1;int temp=L.data[0];
	while(i<j&&i<L.length&&j>=0){
		int temp=L.data[i];
		L.data[i]=L.data[j];L.data[j]=temp;
		i++;j--;
	}
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
	invert(L);
	int i=0;
	for(i=0;i<=L.length-1;i++){
		printf("%d\n",L.data[i]);
	}
	return 0;
 }
