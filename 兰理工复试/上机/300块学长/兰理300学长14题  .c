#include<stdio.h>
#define N  4
//求各列元素之和 
 int sum(int a[N],int n){
 	int i;
 	int s=0;
 	for(i=0;i<N;i++){
 		s+=a[i]; 
	 }
	 return s;
 }
int main(){
	int a[N][N+1]={
		{2,7,8,6},
		{3,6,9,1},
		{8,7,5,4 },
		{3,9,6,7 }
		};
 int i,j;
 for(i=0;i<N;i++)
 {
 	a[i][N]=sum(a[i],N);
 }
	printf("结果：\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N+1;j++)
			printf("%4d",a[i][j]) ;
		printf("\n");
	}
	return 0;
} 
