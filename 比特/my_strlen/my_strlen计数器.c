#include<stdio.h>
int my_strlen(const char*arr){
	int cnt=0;
	while(*arr){
		cnt++;
		arr++;
	}
	return cnt;
}
int main(void){
	char arr[]="abcdef";
	int len=my_strlen(arr);
	printf("%d",len);
	return 0;
} 
