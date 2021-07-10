#include <stdio.h>
#include<string.h>
void reverse(char arr[])
{
	char*left=0;
	char*right=0;
	left=arr;
	right=arr+strlen(arr)-1;
	char tmp;
	while(left<right){
		tmp=*left; 
		*left=*right;
		*right=tmp;
		left++;
		right--;	
	}
}
int main(void)
{
	char arr[200]={0};
	gets(arr);
	reverse(arr);
	printf("%s",arr);
	return 0;
}
