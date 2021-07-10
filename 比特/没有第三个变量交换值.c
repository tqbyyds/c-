#include<stdio.h>
int main()
{
	int a=3;
	int b=5;
	a=a^b;//a=a+b;
	b=b^a;//b=a-b;
	a=b^a;//a=a-b;被注释的代码有溢出的风险 
	printf("%d %d",a,b);
	return 0;
}
