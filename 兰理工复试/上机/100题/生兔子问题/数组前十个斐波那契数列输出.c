#include<stdio.h>
int main(void)//���� f[0]=f[1]=1 f[n]=f[n-1]+f[n-2] 2<=n<=9
{
	int fib[10]={1,1};//��ʼ�����鲢��ֵǰ����Ԫ�� 
	int i=0;
	for(i=2;i<10;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	for(i=0;i<10;i++){
		printf("%6d",fib[i]);//%6dλ��С��6�󲹿ո� ������ʵ����� �ﵽ�Ҷ���Ч�� 
		if(i+1==5)
			printf("\n");
	}
	return 0;
 } 
