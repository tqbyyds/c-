#include<stdio.h>
int main(){
	int i,j,result;
	for(i=1;i<10;i++){
		for(j=1;j<=i;j++){
			result=i*j;
			printf("%d*%d=%-3d",i,j,result);// 定于输出格式。d表示输出整数，3表示输出的数字占3个字符的位置。-号表示对齐方式。
			                                //是左对齐。如果是+号或者不写，表示右对齐。
		}
		printf("\n"); 
	}
	return 0;
} 
