#include<stdio.h>
 char* my_strstr(const char* p1,const char* p2)
{
	char* s1;
	char* s2;
	char* cur=(char*)p1;
	while(*cur){
		s2=(char*)p2;//cur����p1�ĵ�ַ��ÿ��ʧ�ܺ����ʹ s1���ϴε�λ�����¿�ʼ //s2Ҳ�ص���ʼλ�� 
		s1=cur;      //����"abbbcdef"��"bbc"��һ������Ҫ�����s1��s2��ÿ��ʧ�ܺ󣬲��ܻص���ȷλ�ã�"bbc"������Զ���ᱻ�ҵ� 
		while((*s1!=0)&&(*s2!=0)&&(*s1==*s2)){ 
			s1++;                             
			s2++;//��ͬ�������ַ�����ͬʱ������һλ 
		}
		if(*s2==0){
			return cur;//�ҵ���(��ǰ������ 
		}
		cur++;//��ͬ��s1ͨ��cur�����ַ������ 
	}
	return NULL;//û�ҵ� 
	
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
		printf("û�ҵ�"); 
	}
	return 0;
 } 
