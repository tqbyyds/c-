#include<stdio.h>
int fun(int n){
	if(n==0)
		return 1;
	return n*fun(n-1);
}
int fun1(int n){
	int sum=1;
	while(n>1){
		sum*=n;
		n--;
	} 
}
int main()
{
	int a;
	a=fun1(4);
	printf("%d",a);
	return 0;
 }

