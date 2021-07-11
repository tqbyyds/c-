#include<stdio.h>
void hanio(int n,char a,char b,char c){
	if(n==1)
		printf("%c-->%c\n",a,b);//递归的原理类似于数学归纳法 考虑1和2的情况 推出n-1和n的情况 
	else{
		hanio(n-1,a,c,b);
		printf("%c-->%c\n",a,b);
		hanio(n-1,c,b,a);
	}
}
int main()
{
	int n=0;
	char a='a';
	char b='b';
	char c='c';
	printf("please input your disk number");
	scanf("%d",&n);
	hanio(n,a,b,c);
	return 0;
 } 
