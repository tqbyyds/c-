#include<stdio.h>
//判断一个数组是否是回文，如果是回文 ，返回以恶数组 
int main(){
	int a[6]={1,2,3,3,2,1};
	int n=6;
	int i=0;
	int flag=1; 
	for(i=0;i<n/2;i++){
		if(a[i]!=a[n-i-1])
			flag=0;
			break;
	}
	if(flag==1){
		printf("是回文"); 
	}
	else
		printf("不是回文"); 
	
} 
