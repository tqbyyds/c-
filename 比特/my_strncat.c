#include<stdio.h>
char* my_strncat(char*dest,const char* source,int num)
{
	char *tmp=dest;
	while(*dest++){
		;
	}
	dest--;
	while(num--){
		if(!(*dest++=*source++)){//������ ��ֵ �ж� ȡ�� ���� 
			return dest;
		}
	}
}
int main()
{
	char a[30]="abcdef";
	char b[10]="nmlkj";
	int num=4;
	my_strncat(a,b,num);
	printf("%s",a);
	return 0;	
} 
