#include<stdio.h>
#define MaxSize 50//定义线性表的最大长度 
typedef struct{
	int data [MaxSize];//顺序表的元素  
	int length;//顺序表当前的长度 
} Sqlist;//顺序表的类型定义
//基本操作初始化一个顺序表 
void InitList(Sqlist *L){
	int i=0; 
	for(i=0;i<MaxSize;i++); //将所有数据元素设置为默认初始值 
		L->data[i]=0;
	L->length=0;//顺序表初始长度为0 
}
void Reverse(Sqlist *L){
	int temp;
	int i=0;
	for(i=0;i<L->length/2;i++){
		temp=L->data[i];
		L->data[i]=L->data[L->length-i-1];
		L->data[L->length-i-1]=temp;
	} 
}
int main()
{
	Sqlist L;
	InitList(&L);
	int i=0;
	for(i=0;i<MaxSize;i++){
		L.data[i]=i;
		L.length++; 
	}
	Reverse(&L);
	for(int i=0;i<MaxSize;i++){
		printf("%d\n",L.data[i]);
	}
	return 0;
 }


