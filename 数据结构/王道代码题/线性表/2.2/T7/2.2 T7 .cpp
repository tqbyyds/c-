#include<stdio.h>
bool Merge(SqList A,Sqlist 	B,sqlist C){
	//������˳���A��B�ϲ�Ϊһ���µ�����˳���
	if(A.length+B.length>C.maxSize)//����˳������󳤶�
		return false;
	int i=0,j=0,k=0;
	while(i<A.length&&j<B.length){//ѭ�� �����Ƚ� С�ߴ������� 
		if(A.data[i]<=B.data[j])
			C.data[k++]=A.data[i++];
		else
			C.data[k++]=B.data[j++];
	}
	while(i<A.length)//��ʣһ��û�бȽ����˳��� 
		C.data[k++]=A.data[i++];
	while(j<B.length)
		C.data[k++]=B.data[j++];
	C.length=k;
	return true; 
} 
int main()
{

	return 0;
 }

