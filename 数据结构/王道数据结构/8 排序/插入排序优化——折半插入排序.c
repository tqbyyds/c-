#include<stdio.h>
//折半插入排序 
void InsertSort(int A[],int n){
	int i,j,low,high,mid;
	for(i=2;i<=n;i++){//依次将A[2]~A[n]插入前面的已排序序列 
		A[0]=A[i];//将A[i]暂存到A[0] 
		low=1;high=i-1;//设置折半查找的范围 
		while(low<=high){//折半查找（默认递增有序） 
			mid=(low+high)/2;//取中间点 
			if(A[mid]>A[0]) high=mid-1;//查找左半子表 
			else low=mid+1;//查找右半子表 
			//复制到 low所指位置 当A[mid]==A[0]时 为了保证算法的稳定性 应继续在
//mid所指位置右边寻找插入位置  
		}
		for(j=i-1;j>=high+1;--j)
			A[j+1]=A[j];//统一后移元素，空出插入位置 
		A[high+1]=A[0];//插入操作 
	}
} 
//当low>high时折半查找应停止，应将[low,i-1]内的元素全部右移，并将A[0]

 
int main()
{

	return 0;
 }

