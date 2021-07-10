#include<stdio.h>
char* my_strcat(char* dest,const char* source){
	char*ret=dest;
	while(*dest!='\0'){
		dest++;
	}
	while(*dest++=*source++){//先解引用再赋值再自增 
		;
	}
	return ret;//返回目的空间起始地址 
}
int main(void){
	char arr1[]="abcd";
	char arr2[]="bit";
	my_strcat(arr1,arr2);
	printf("%s",arr1); 
	return 0;
}
