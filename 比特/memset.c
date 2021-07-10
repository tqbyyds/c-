#include<stdio.h>
#include<string.h>
int main(void)
{
	char arr[10]={0};
	memset(arr,'#',10);//目的地 类型 设置的字节数 
	int i;
	for(i=0;i<10;i++){
		printf("%c ",arr[i]);
	}
	return 0;
 } 
