#include<stdio.h>
 char* my_strstr(const char* p1,const char* p2)
{
	char* s1;
	char* s2;
	char* cur=(char*)p1;
	while(*cur){
		s2=(char*)p2;//cur保存p1的地址在每轮失败后可以使 s1从上次的位置重新开始 //s2也回到起始位置 
		s1=cur;      //对于"abbbcdef"找"bbc"这一步很重要，如果s1和s2在每轮失败后，不能回到正确位置，"bbc"可能永远不会被找到 
		while((*s1!=0)&&(*s2!=0)&&(*s1==*s2)){ 
			s1++;                             
			s2++;//相同则两个字符串会同时移向下一位 
		}
		if(*s2==0){
			return cur;//找到了(提前结束） 
		}
		cur++;//不同则s1通过cur保存地址并自增 
	}
	return NULL;//没找到 
	
}
int main(void)
{
	char* p1="abbbcdef";
	char* p2="bbc";
 	char* ret=my_strstr(p1,p2);
	if(ret){
		printf("%s",ret); 
	}
	else{
		printf("没找到"); 
	}
	return 0;
 } 
