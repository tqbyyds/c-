#include<stdio.h>
int main(){
	int i;
	int n;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	printf("因子之和为%d",sum);
	return 0;
} 
