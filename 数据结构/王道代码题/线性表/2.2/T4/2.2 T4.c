#include<stdio.h>
bool Del_s_t2(SqList &L,ElemType s,ElemType t){
//ɾ������˳���L��ֵ�ڸ���ֵs��t֮�������Ԫ��
	int i,j;
	if(s>=t||L.length==0)
		return false;
	for(i=0;i<L.length&&L.data[i]<s;i++);//Ѱ��ֵ���ڵ���s�ĵ�һ��Ԫ�� 
	if(i>=L.length)
		return false;//����Ԫ��ֵ��С��s,����
	for(j=i;j<L.length&&L.data[j]<=t;j++);//Ѱ��ֵ����t�ĵ�һ��Ԫ��
	for(;j<L.length;i++,j++)
		L.data[i]=L.data[j];//ǰ�� ���ɾ��Ԫ��λ�� 
	L.length=i;
	return true;		
} 
int main()
{

	return 0;
 }

