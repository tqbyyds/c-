#include<stdio.h>//offsetof是计算偏移量的 
#define OFFSETOF(struct_name,member_name) (long long)&(((struct_name*)0)->member_name)
struct S								//0强制类型转换为struct S* ->找到并取其成员的地址 强转为long long 
{
	char a;
	int b;
	char c;	
}; 
int main()
{
	printf("%d\n",OFFSETOF(struct S,a));
	printf("%d\n",OFFSETOF(struct S,b));
	printf("%d\n",OFFSETOF(struct S,c));
	return 0;
 }

