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
	for(ret=strtok(s1,s3);ret!=NULL;ret=strtok(NULL,s3)){//��ʼ��ֻ����һ�Σ�ret��Ϊ��ָ��ʹ�ӡ��ÿ�β�����Ϊret=strtok(NULL,s3) 
		printf("%s ",ret);
	}
	return 0;
}
