#include<stdio.h>
int my_strlen(char*arr){
	char* start=arr;
	char* end=arr;
	while(*end!=0){
		end++;
	}
	return end-start;
} 
int main(void){
	char arr[]="abcdef";
	int ret=my_strlen(arr);
	printf("%d",ret);
	return 0;
}
