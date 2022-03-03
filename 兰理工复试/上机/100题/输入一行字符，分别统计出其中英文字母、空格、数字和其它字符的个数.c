#include<stdio.h>
int main(){
	printf("请输入一些字符\n");
	int digit=0;
	int letter=0;
	int space=0;
	int other=0;
	char c;
	while((c=getchar())!='\n'){
		if('a'<=c&&c<='z'||'A'<=c&&c<='Z')
			letter++;
		else if(c==' ')
			space++;
		else if('0'<=c&&c<='9')
			digit++;
		else
			other++;
	}
	printf("字母%d\n空格%d\n数字%d\n其他%d\n",letter,space,digit,other);
	return 0;
} 
