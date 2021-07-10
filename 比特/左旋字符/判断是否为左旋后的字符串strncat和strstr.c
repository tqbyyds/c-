#include<stdio.h>
#include<string.h>
int is_left_move(char*arr,char*arr1){
	int len1=strlen(arr);
	int len2=strlen(arr1);
	strncat(arr,arr,len1);//(目的地址 追加内容地址 追加位数)
	if(len1!=len2){
		return 0;
	}
	if(strstr(arr,arr1)==NULL){
		return 0;
	}
	else{
		return 1;
		}
	
}
int main(void){
	char arr[]="abcdef";
	char arr1[]="defabc";
	int ret=is_left_move(arr,arr1);
	if(ret==1){
		printf("yes\n"); 
	}
	else{
		printf("no\n");
	}
	return 0;	
}
