#include<stdio.h>
#define MAXLEN 255 //预定义最大串长为255
typedef struct{
	char ch[MAXLEN];//每个分量存储一个字符 
	int length;//串的实际长度 
}SString;
int Index_KMP(SString S,SString T,int next[]){
	int i=1,j=1;
	while(i<=S.length&&j<=T.length){
		if(j==0||S.ch[i]==T.ch[j]){
			++i;++j;//继续比较后继字符 
		}
		else
			j=next[j]; //模式串向右移动 
		 
	}
	if(j>T.length)
		return i-T.length;//匹配成功 
	else
		return 0; 
} 

int main()
{
	
	return 0;
 }

