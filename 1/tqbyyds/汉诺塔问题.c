#include<stdio.h>
void hanio(int n,char a,char b,char c){
	if(n==1)
		printf("%c-->%c\n",a,b);//�ݹ��ԭ����������ѧ���ɷ� ����1��2����� �Ƴ�n-1��n����� 
	else{
		hanio(n-1,a,c,b);
		printf("%c-->%c\n",a,b);
		hanio(n-1,c,b,a);
	}
}
int main()
{
	int n=0;
	char a='a';
	char b='b';
	char c='c';
	printf("please input your disk number");
	scanf("%d",&n);
	hanio(n,a,b,c);
	return 0;
 } 
