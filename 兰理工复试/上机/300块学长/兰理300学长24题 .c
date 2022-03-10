#include<stdio.h>
int binnay(int a[],int n)
{
	//默认长度为10
	int low=0,high=9,mid;
	while(low<high)
	{
		mid=(low+high)/2;
		if(n>a[mid])
			low=mid+1;
		else if(n<a[mid])
			high=mid-1;
		else  return (mid);//表示成功，返回； 	
	} 
	return -1;
}
int main()
{
	
	//1.设置长度为10的数组，要求获取用户输入的数据，并输入查找的数据，
	//运用二分查找，查找数据的下标，失败返回-1
	
	 int a[10];
	 int b;
	 int i; 
	 for(i=0;i<10;i++)
	 {
	 	
	 	scanf("%d",&a[i]);
	  } 
	  for(i=0;i<10;i++)
	 {
	 	printf("%d",a[i]); 
	  } 
	int n;
	printf("输入查找元素"); 
	scanf("%d",&n);
	int result=binnay(a,n);
	if(result==-1)
	{
		printf("查找失败");
 } 	else
	{	
		printf("其位置为：%d",result);
	 } 
	 return 0;
}
