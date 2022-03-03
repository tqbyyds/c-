#include<stdio.h>
int main(void)//规律 f[0]=f[1]=1 f[n]=f[n-1]+f[n-2] 2<=n<=9
{
	int fib[10]={1,1};//初始化数组并赋值前两个元素 
	int i=0;
	for(i=2;i<10;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	for(i=0;i<10;i++){
		printf("%6d",fib[i]);//%6d位数小于6左补空格 大于则实际输出 达到右对齐效果 
		if(i+1==5)
			printf("\n");
	}
	return 0;
 } 
