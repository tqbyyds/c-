#include<stdio.h>
int main()
{
	int a=3;
	int b=5;
	a=a^b;//a=a+b;
	b=b^a;//b=a-b;
	a=b^a;//a=a-b;��ע�͵Ĵ���������ķ��� 
	printf("%d %d",a,b);
	return 0;
}
