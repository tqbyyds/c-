#include<stdio.h>
int main(void){
	int n;//n±ØĞëÎªÆæÊı 
	int i;
	int j;
	scanf("%d",&n);
	int head=n;
	for(i=1;i<=head;i++){
		for(j=1;j<=head-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	
	return 0;
}
