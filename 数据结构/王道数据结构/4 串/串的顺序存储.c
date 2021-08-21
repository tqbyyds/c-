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
//比较操作 若S>T则返回值>0;若S=T,则返回值=0 若S<T, 则返回值<0  
int StrCompare(SString S,SString T)
{
	for(int i=1;i<=S.length&&i<=T.length;i++){
		if(S.ch[i]!=T.ch[i])
			return S.ch[i]-T.ch[i]; 
	}
	//扫描过的所有字符都相同，则长度长的串更大 
	return S.length-T.length;
}
int Index(SString S,SString T){
	int i=1,n=StrLength(S),m=StrLength(T);
	SString sub;//用于暂存子串
	while(i<=n-m+1){
		SubString(sub,S,i,m);
		if(StrCompare(sub,T)!=0) ++i;
		else return i;//返回子串在主串中的位置 
	}
	return 0;//S中不存在与T相等的子串 
}
//定位操作 若主串S中存在与串T值相同的字串，则返回它在主串中第一次出现的位置 否则函数值为0 
int Index(SString,SString T){
	int i=1,n=StrLength(S),m=StrLength(T);
	SString sub;//用于暂存子串
	while(i<n-m+1){
		SubString(sub,S,i,m);
		if(StrCompare(sub,T)!=0) ++i;
		else return i;//返回字串在主串中的位置 
	} 
	return 0;//S中不存在与T相等的字串 
} 
int main()
{

	return 0;
 }

