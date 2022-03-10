#include<stdio.h>
#include<string.h>
#define MAX 100
#define MAX2 200 
void changes(char *s);
void insert(char *s,char *fs);
int main(){
	char s[MAX];
	char fs[MAX2];
	printf("输入明文：");
	gets(s);//gets从标准输入设备读字符串函数，其可以无限读取，不会判断上限，以回车结束读取，
	changes(s);
	insert(s,fs);
	printf("密文为：%s\n",fs);
	return 0;
} 
void changes(char *s)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		//大写字母的处理 
		if(s[i]>64&&s[i]<91)
			{
				s[i]=(s[i]+4);
				//临界字母的处理 
				if(s[i]>90)
				{
					s[i]=s[i]-26; 
				} 
			}
		else if(s[i]>96&&s[i]<123) //小写字母的处理 
		{	
				s[i]=(s[i]+4);
				//临界字母 
				if(s[i]>122)
				{
					s[i]=s[i]-26; 
				} 			
		}	
	}   
 } 
//插入函数
void insert(char *s,char *fs)
{
	int i,j;
	for(i=0,j=0;s[i]!='\0';i++)
	{
		fs[j]=s[i];
		fs[j+1]=' ';
		j+=2;	
	}	
}
