#include<stdio.h>
#define MAXLEN 255 //Ԥ������󴮳�Ϊ255
//��̬����ʵ�� 
typedef struct{
	char ch[MAXLEN];//ÿ�������洢һ���ַ� 
	int length;//����ʵ�ʳ��� 
}SString;
int Index(SString S,SString T){
	int i=1,j=1;
	while(i<=S.length&&j<=T.length){
		if(S.ch[i]==T.ch[j]){
			++i;++j;//�����ȽϺ���ַ� 
		}
		else{
			i=i-j+2;
			j=1; //ָ��������¿�ʼƥ�� 
		} 
	}
	if(j>T.length)
		return i-T.length;     //�ҵĵ����ش���0����  
	else                       //�Ҳ�������0 
		return 0; 
} 
int main()
{
	SString S={"0rnmtq",5}; //0��Ϊ������char [0] ��֤�ַ���λ��������±���ͬ 
	SString T={"0m",1};
	int a=Index(S,T);
	printf("%d",a);
	return 0;
 }

