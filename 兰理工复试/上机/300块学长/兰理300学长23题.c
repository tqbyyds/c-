#include<stdio.h>
#include<string.h>
#define MAX 100
#define MAX2 200 
void changes(char *s);
void insert(char *s,char *fs);
int main(){
	char s[MAX];
	char fs[MAX2];
	printf("�������ģ�");
	gets(s);//gets�ӱ�׼�����豸���ַ�����������������޶�ȡ�������ж����ޣ��Իس�������ȡ��
	changes(s);
	insert(s,fs);
	printf("����Ϊ��%s\n",fs);
	return 0;
} 
void changes(char *s)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		//��д��ĸ�Ĵ��� 
		if(s[i]>64&&s[i]<91)
			{
				s[i]=(s[i]+4);
				//�ٽ���ĸ�Ĵ��� 
				if(s[i]>90)
				{
					s[i]=s[i]-26; 
				} 
			}
		else if(s[i]>96&&s[i]<123) //Сд��ĸ�Ĵ��� 
		{	
				s[i]=(s[i]+4);
				//�ٽ���ĸ 
				if(s[i]>122)
				{
					s[i]=s[i]-26; 
				} 			
		}	
	}   
 } 
//���뺯��
void insert(char *s,char *fs)
{
	int i,j;
	for(i=0,j=0;s[i]!='\0';i++)
	{
		fs[j]=s[i];
		fs[j+1]=' ';
		j+=2;	
	}	
}
