#include<stdio.h>
#include<windows.h>
int isprime(int x,int a[],int b);
int main(void){
	const int number=100;
	int a[number];
	a[0]=2;
	int count=1;
	int i;
	for(i=3;count<number;i++){
		if(isprime(i,a,count)){
			a[count++]=i;
		}
	}
	for(i=0;i<number;i++){
		if(i%5==0){
			printf("\n");
		}
		printf("%d\t",a[i]);
	}
	system("pause");
	return 0;
}
int isprime(int x,int a[],int b)
{
		int i;
	    int ret=1;
	for(i=0;i<b;i++){
		if(x%a[i]==0){
			ret=0;
			break;
		}
	}
	return ret;	
}
