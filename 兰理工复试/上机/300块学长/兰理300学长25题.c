#include<stdio.h>
int main(){
	int a[3][3]={
		{-1,2,3},
		{3,4,5},
		{4,5,6}	
	}; 
	int sum=0;
	int i; 
	for(i=0;i<3;i++)
	{
		sum+=a[i][i];
	}
	
	printf("%d",sum);
	return 0;
}
