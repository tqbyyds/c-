#include<stdio.h>
char*my_strncpy(char*dest,const char*source,int count)
{
	char*tmp=dest;
	while(count&&(*dest++=*source++)){
		count--;
	}
	if(count){ 
		while(--count){
			/*因为*dest++=*source++已经追加了一个0故再次追加count-1个就可以了*/
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
