#include<stdio.h>
int main(){
	int f1=1;int f2=1;int i=0;
	for(i=1;i<=10;i++){
		printf("%d %d",f1,f2);
		f1=f1+f2;
		f2=f2+f1;
		printf(" ");
	}
	return 0;
} 
