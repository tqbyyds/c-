#include<stdio.h>
#define MAXLEN 255 //Ԥ������󴮳�Ϊ255
//��̬����ʵ�� 
typedef struct{
	char ch[MAXLEN];//ÿ�������洢һ���ַ� 
	int length;//����ʵ�ʳ��� 
}SString;
//��̬����ʵ��
typedef struct{
	char *ch;//����������洢����chָ�򴮵Ļ���ַ 
	int length;//���ĳ��� 
}HString;
//��ʼ�� 
HString S;
S.ch=(char *)malloc(MAXLEN*sizeof(char));
S.length=0;
//���Ӵ� ��sub���ص�pos���ַ��𳤶�Ϊlen���ִ� ��̬���� 
bool SubString(SString &Sub,SString S,int pos,int len){
	//�ִ���ΧԽ�� 
	if(pos+len-1>S.length)
		return false;
	for(int i=pos;i<pos+len;i++)
		Sub.ch[i-pos+1]=S.ch[i];
	Sub.length =len;
	return true;
}
//�Ƚϲ��� ��S>T�򷵻�ֵ>0;��S=T,�򷵻�ֵ=0 ��S<T, �򷵻�ֵ<0  
int StrCompare(SString S,SString T)
{
	for(int i=1;i<=S.length&&i<=T.length;i++){
		if(S.ch[i]!=T.ch[i])
			return S.ch[i]-T.ch[i]; 
	}
	//ɨ����������ַ�����ͬ���򳤶ȳ��Ĵ����� 
	return S.length-T.length;
}
int Index(SString S,SString T){
	int i=1,n=StrLength(S),m=StrLength(T);
	SString sub;//�����ݴ��Ӵ�
	while(i<=n-m+1){
		SubString(sub,S,i,m);
		if(StrCompare(sub,T)!=0) ++i;
		else return i;//�����Ӵ��������е�λ�� 
	}
	return 0;//S�в�������T��ȵ��Ӵ� 
}
//��λ���� ������S�д����봮Tֵ��ͬ���ִ����򷵻����������е�һ�γ��ֵ�λ�� ������ֵΪ0 
int Index(SString,SString T){
	int i=1,n=StrLength(S),m=StrLength(T);
	SString sub;//�����ݴ��Ӵ�
	while(i<n-m+1){
		SubString(sub,S,i,m);
		if(StrCompare(sub,T)!=0) ++i;
		else return i;//�����ִ��������е�λ�� 
	} 
	return 0;//S�в�������T��ȵ��ִ� 
} 
int main()
{

	return 0;
 }

