#include<stdio.h>
char*my_strncpy(char*dest,const char*source,int count)
{
	char*tmp=dest;
	while(count&&(*dest++=*source++)){
		count--;
	}
	if(count){ 
		while(--count){
			/*��Ϊ*dest++=*source++�Ѿ�׷����һ��0���ٴ�׷��count-1���Ϳ�����*/
			*dest++='\0';
		}
    }
    return tmp;
}
int main(void)
{
	int count=5;
	char a[20]="azbxn";
	char b[30]="yyds";
	my_strncpy(a,b,count);
	printf("%s",a);
	return 0;
 } 
