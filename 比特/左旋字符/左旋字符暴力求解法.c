#include<stdio.h>
#include<string.h>
void left_rotate(char*arr,int k)
{
	int i,j;
	int len=strlen(arr);
	char tmp=0;
	for(i=1;i<=k;i++){
		tmp=*arr;//��ʱ�����һ���ַ� 
		for(j=0;j<len-1;j++){//��2���ַ���ֵ����1���ַ� �����������ڶ���..... 
			*(arr+j)=*(arr+j+1);
		}
		*(arr+len-1)=tmp;//��ʱ����ĸ�ֵ�����һλ 
	}
}
int main(void){
	char arr[]="abcdef";
	int k=3;
	left_rotate(arr,k);
	printf("%s\n",arr);
	return 0;	
}
