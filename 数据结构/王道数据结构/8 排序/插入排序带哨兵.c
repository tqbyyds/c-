#include<stdio.h>
//直接插入排序（带哨兵） 
void InsertSort(int A[],int n){
	int i,j
	for(i=2;i<=n;i++)//依次将A[2]~A[n]插入到前面已排序序列 
		if(A[i]<A[i-1]){//若A[i]关键字小于前驱 
			A[0]=A[i];//复制为哨兵 A[0]不存放元素 
			for(j=i-1;A[0]<A[j];--j)//从后往前查找待插入位置 
				A[j+1]=A[j];//向后挪位 
			A[j+1]=A[0];//复制到插入位置 
		}
} 
int main()
{

	return 0;
 }

