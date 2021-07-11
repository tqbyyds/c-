#include<stdio.h>
#include<string.h>
int main(void)
{
	char s1[]="tqb@qq.com";
	char s2[1024]={0};
	char *ret=0;
	char s3[]="@.";
	strcpy(s2,s1);
	strtok(s2,s3);
	for(ret=strtok(s1,s3);ret!=NULL;ret=strtok(NULL,s3)){//初始化只进行一次；ret不为空指针就打印；每次步进都为ret=strtok(NULL,s3) 
		printf("%s ",ret);
	}
	return 0;
}
