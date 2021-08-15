#include<stdio.h>
#define MAXLEN 255 //预定义最大串长为255
//静态数组实现 
typedef struct{
	char ch[MAXLEN];//每个分量存储一个字符 
	int length;//串的实际长度 
}SString;
//动态数组实现
typedef struct{
	char *ch;//按串长分配存储区，ch指向串的基地址 
	int length;//串的长度 
}HString;
//初始化 
HString S;
S.ch=(char *)malloc(MAXLEN*sizeof(char));
S.length=0;
//求子串 用sub返回第pos个字符起长度为len的字串 静态数组 
bool SubString(SString &Sub,SString S,int pos,int len){
	//字串范围越界 
	if(pos+len-1>S.length)
		return false;
	for(int i=pos;i<pos+len;i++)
		Sub.ch[i-pos+1]=S.ch[i];
	Sub.length =len;
	return true;
} 
int main()
{

	return 0;
 }

