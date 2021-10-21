#include<stdio.h>
#define MaxSize 12500
typedef struct{
	int i,j;
	ElemType e;//非零元的行下标和列下标 
}Triple;
typedef struct{
	Triple data[MaxSize+1];//非零元三元组表 data[0]未用 
	int mu,nu,tu;//矩阵的行数列数和非零元个数 
}TSMatrix; 
int main()
{

	return 0;
 }

