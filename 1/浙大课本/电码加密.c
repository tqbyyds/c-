#include<stdio.h>
#include<string.h>
void encrypt(char str[])
{
	int i=0;
	while(str[i]){
		if(str[i]=='z'){
			str[i]='a';
		}
		else{
			str[i]+=1;
		}
		i++;
	}
}
/*void deciphering(char str[])
{
	int i=0;
	while(str[i]){
		if(str[i]=='a'){
			str[i]='z';
		}
		else{
			str[i]-=1;
		}
		i++;
	}
}//解密*/ 
int main()
{
	char str[100];
	printf("请输入你要加密的字符串"); 
	gets(str);
	encrypt(str); 
	//deciphering(str);
	printf(str);
	return 0;
}
