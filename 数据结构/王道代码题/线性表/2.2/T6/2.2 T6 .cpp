#include<stdio.h>
bool Delete_same(SeqList& L){
	if(L.length==0)
		return false;
	int i,j; //i�洢��һ������ͬ��Ԫ�أ�jΪ����ָ�� 
	for(i=0,j=1;j<L.length;j++)
		if(L.data[i]!=L.data[j])//������һ������һ��Ԫ��ֵ��ͬ��Ԫ�� 
			L.data[++i]=L.data[j];//�ҵ���Ԫ��ǰ�� 
	L.length=i+1;
	return true;	
} 
int main()
{

	return 0;
 }

