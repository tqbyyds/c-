#include<stdio.h>
int main(){
	int i=0;
	int count=0;
	for(i=10;i<=99;i++){
		int a=i/10;
		int b=i%10;
		if(a<=b&&a+b==10){
			count++;
			printf("%d+%d \n",a,b);
		}
	}
	printf("%d¸ö",count);
} 
