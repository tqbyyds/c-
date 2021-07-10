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
	reverse(arr,arr+k-1);//倒序abcd ef中的abcd的 
	reverse(arr+k,arr+len-1);//倒序abcd ef中的ef 
	reverse(arr,arr+len-1);//倒序abcd 
}
int is_left_move(char*arr,char*arr1){
	int i=0;
	int len=strlen(arr);
	for(i=0;i<len;i++){
		left_rotate(arr,i,len);
		printf("%s\n",arr);
		strcmp(arr,arr1);
		if(strcmp(arr,arr1)==0)
		return 1;
	}
}
int main(void){
	char arr[]="abcdef";
	char arr1[]="fabcde";
	int ret=is_left_move(arr,arr1);
	if(ret==1){
		printf("yes\n"); 
	}
	else{
		printf("no\n");
	}
	system("pause");
	return 0;	
}