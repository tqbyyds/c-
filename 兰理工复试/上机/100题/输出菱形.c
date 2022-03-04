#include<stdio.h>
int main(void){
	int n;//n±ØĞëÎªÆæÊı 
	int i;
	int j;
	scanf("%d",&n);
	int tail=n/2;
	int head=n-tail;
	for(i=1;i<=head;i++){
		for(j=1;j<=head-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=tail;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(j=1;j<=2*(tail-i)+1;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
