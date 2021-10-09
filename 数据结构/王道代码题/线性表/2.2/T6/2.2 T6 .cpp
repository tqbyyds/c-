#include<stdio.h>
#define MaxSize 50//定义线性表的最大长度 
typedef struct{
	int data [MaxSize];//顺序表的元素  
	int length;//顺序表当前的长度 
}Sqlist;//顺序表的类型定义
bool Delete_same(Sqlist &L){
	if(L.length==0)
		return false;
	int i,j; //i存储第一个不相同的元素，j为工作指针 
	for(i=0,j=1;j<L.length;j++)
		if(L.data[i]!=L.data[j])//查找下一个与上一个元素值不同的元素 
			L.data[++i]=L.data[j];//找到后将元素前移 
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

