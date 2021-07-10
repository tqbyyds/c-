#include<stdio.h>
#include<string.h>
void reverse(char*left,char*right)
{
	while(left<right){
		char tmp=0;
		tmp=*left;
		*left=*right;
		*right=tmp;
		left++;
		right--;
	}
}
void left_rotate(char*arr,int k,int len)
{
	reverse(arr,arr+k-1);//����abcd ef�е�abcd�� 
	reverse(arr+k,arr+len-1);//����abcd ef�е�ef 
	reverse(arr,arr+len-1);//����abcd 
}
int main(void){
	int i;
	char arr[]="abcdef";
	int len=strlen(arr);
	int k=3;
	left_rotate(arr,k,len);
	printf("%s\n",arr);

	return 0;	
}
