#include<stdio.h>
int my_strcmp(const char*str1,const char*str2){
	while(*str1==*str2){
		if(*str1=='\0'){
			return 0;       //逐个元素比较若相等则指向下一个，直到不相等 
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
