#include<stdio.h>
int my_strlen(char*arr){
	if(*arr!=0){
		return 1+my_strlen(arr+1);
	}
	return 0;
}
int main(void){
	char arr[]="abcdef";
	int ret=my_strlen(arr);
	printf("%d",ret);
	return 0;
}
