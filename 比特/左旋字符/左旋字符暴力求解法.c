#include<stdio.h>
#include<string.h>
void left_rotate(char*arr,int k)
{
	int i,j;
	int len=strlen(arr);
	char tmp=0;
	for(i=1;i<=k;i++){
		tmp=*arr;//临时保存第一个字符 
		for(j=0;j<len-1;j++){//第2个字符赋值给第1个字符 ；第三个给第二个..... 
			*(arr+j)=*(arr+j+1);
		}
		*(arr+len-1)=tmp;//临时保存的赋值给最后一位 
	}
}
int main(void){
	char arr[]="abcdef";
	int k=3;
	left_rotate(arr,k);
	printf("%s\n",arr);
	return 0;	
}
