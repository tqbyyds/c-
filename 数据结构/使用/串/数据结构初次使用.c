#include<stdio.h>
#define MAXLEN 255 //预定义最大串长为255
//静态数组实现 
typedef struct{
	char ch[MAXLEN];//每个分量存储一个字符 
	int length;//串的实际长度 
}SString;
int Index(SString S,SString T){
	int i=1,j=1;
	while(i<=S.length&&j<=T.length){
		if(S.ch[i]==T.ch[j]){
			++i;++j;//继续比较后继字符 
		}
		else{
			i=i-j+2;
			j=1; //指针后退重新开始匹配 
		} 
	}
	if(j>T.length)
		return i-T.length;     //找的到返回大于0的数  
	else                       //找不到返回0 
		return 0; 
} 
int main()
{
	SString S={"0rnmtq",5}; //0是为了弃用char [0] 保证字符的位序和数组下标相同 
	SString T={"0m",1};
	int a=Index(S,T);
	printf("%d",a);
	return 0;
 }

