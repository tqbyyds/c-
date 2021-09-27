#include<stdio.h>
typedef struct{//查找表的数据结构（顺序表） 
	ElemType *elem;//动态数组基址 
	int TableLen//表的长度 
}SSTable; 
//顺序查找
int Search_Seq(SSTable,ElemType key){
	ST.elem[0]=key;//哨兵
	int i;
	for(i=ST.TableLen;ST.elem[i]!=key;--i);
	return i; //查找成功 则返回元素下标 查找失败则返回0 
}
int main()
{

	return 0;
 }

