#include<stdio.h>
char* my_strcat(char* dest,const char* source){
	char*ret=dest;
	while(*dest!='\0'){
		dest++;
	}
	while(*dest++=*source++){//�Ƚ������ٸ�ֵ������ 
		;
	}
	return ret;//����Ŀ�Ŀռ���ʼ��ַ 
}
int main(void){
	char arr1[]="abcd";
	char arr2[]="bit";
	my_strcat(arr1,arr2);
	printf("%s",arr1); 
	return 0;
}
