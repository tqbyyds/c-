#include<stdio.h>
int my_strcmp(const char*str1,const char*str2){
	while(*str1==*str2){
		if(*str1=='\0'){
			return 0;       //���Ԫ�رȽ��������ָ����һ����ֱ������� 
		}
		str1++;
		str2++;
	}
	if(*str1>*str2)
	return 1;
	else
	return -1;
	
}
int main(void){
	char *p1="abcdh";
	char *p2="abcdedf";
	int ret=my_strcmp(p1,p2);
	printf("%d",ret);
	return 0;
}
