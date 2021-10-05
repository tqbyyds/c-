#include<stdio.h>
#define MaxSize 50//定义线性表的最大长度 
typedef struct{
	ElemType data [MaxSize];//顺序表的元素  
	int length;//顺序表当前的长度 
} Sqlist;//顺序表的类型定义
//基本操作初始化一个顺序表 
void InitList(Sqlist &L){
	for(int i=0;i<MaxSize;i++); //将所有数据元素设置为默认初始值 
		L.data[i]=0;
	L.length=0;//顺序表初始长度为0 
}
//注意！！！线性表中元素的位序是从1开始的 而数组中的元素下标是从0开始的 
bool ListInsert(SqList &L,int i,int e){
	if(i<1||i>L.length+1)//判断i的范围是否有效 
		return false;
	if(L.length>=Maxize)//当前存储空间已满不能插入 
		return false;
	for(int j=L.length;j>=i;j--)//将第i个元素及之后的元素后移 
		L.data[j]=L.data[j-1];
	L.data[i-1]=e;//在位置i处放入e 
	L.length++;//长度加1
	return true;
}
bool void ListDelete(SeqList &L,int i,int &e){
	if(i<1||i>L.length)//判断i的范围是否有效 
		return false;
	e=L.data[i-1];
	for(int j=i;j<L.length;j++)//将第i个元素及之后的元素后前移 
		L.data[j-1]=L.data[j]; 
	L.length--;//长度减1
	return true;
}
int GetElem(SeqList L,int i){//按位查找 
	return L.data[i-1];
}
int LocateElem(SeqList L,int e){//按值查找  
	for(int i=0;i<L.length;i++)
		if(L.data[i]==e)
			return i+1;//数组下标为i的元素值等于e,返回其位序i+1 
	return 0;//退出循环，说明查找失败了 
} 
int main()
{
	Sqlist L;//声明一个顺序表 
	InitList(&L);//初始化顺序表 
	//随便输入几个元素
	ListInsert(L,3,3); 
	int e=-1;//用变量e把删除的元素"带回来"
	if(ListDelete(L,3,e))
		printf("已删除第三个元素，删除元素值为=%d\n",e);
	else
		printf("位序i不合法，删除失败\n"); 
	return 0;
 }

