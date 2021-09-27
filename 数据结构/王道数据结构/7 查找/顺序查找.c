#include<stdio.h>
typedef struct{//查找表的数据结构（顺序表） 
	ElemType *elem;//动态数组基址 
	int TableLen//表的长度 
}SSTable; 
//顺序查找
int Search_Seq(SSTable,ElemType key){
	int i;
	for(i=0;i<ST.Tablelen&&ST.elem[i]!=key;++i);
	//查找成功 则返回元素下标 查找失败 则返回-1 
	return i==ST.TableLen?-1:i;
} 
int main()
{

	return 0;
 }

