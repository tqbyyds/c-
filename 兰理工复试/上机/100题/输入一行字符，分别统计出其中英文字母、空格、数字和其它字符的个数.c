#include<stdio.h>
int main(){
	printf("������һЩ�ַ�\n");
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
	printf("��ĸ%d\n�ո�%d\n����%d\n����%d\n",letter,space,digit,other);
	return 0;
} 
