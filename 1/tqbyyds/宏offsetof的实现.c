#include<stdio.h>//offsetof�Ǽ���ƫ������ 
#define OFFSETOF(struct_name,member_name) (long long)&(((struct_name*)0)->member_name)
struct S								//0ǿ������ת��Ϊstruct S* ->�ҵ���ȡ���Ա�ĵ�ַ ǿתΪlong long 
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

