#include<stdio.h>
#define MaxSize 50//定义线性表的最大长度 
typedef struct{
	int data [MaxSize];//顺序表的元素  
	int length;//顺序表当前的长度 
} Sqlist;//顺序表的类型定义
void InitList(Sqlist *L){
	int i=0;
	for(i=0;i<MaxSize;i++); //将所有数据元素设置为默认初始值 
		L->data[i]=0;
	L->length=0;//顺序表初始长度为0 
}
int Del_s_t2(Sqlist *L,int  s,int  t){
//删除有序顺序表L中值在给定值s与t之间的所有元素
	int i,j;
	if(s>=t||L->length==0)
		return 0;
	for(i=0;i<L->length&&L->data[i]<s;i++);//寻找值大于等于s的第一个元素 
	if(i>=L->length)
		return 0;//所有元素值均小于s,返回
	for(j=i;j<L->length&&L->data[j]<=t;j++);//寻找值大于t的第一个元素
	for(;j<L->length;i++,j++)
		L->data[i]=L->data[j];
	L->length=i;
	return 1;		
} 
int main()
{
	Sqlist L;
	InitList(&L);
	int i=0;
	for(i=0;i<=10;i++){
		L.data[i]=i;
		L.length++;
	}
	
	Del_s_t2(&L,3,8);
	for(i=0;i<L.length;i++){
		printf("%d\n",L.data[i]);
	}
	printf("*%d*",L.length);
	return 0;
 }

