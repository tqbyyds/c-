#include<stdio.h>
//ֱ�Ӳ�������
void InsertSort(int A[],int n){
	int i,j,temp;
	for(i=1;i<n;i++)//����Ԫ�ز������ź���������� 
		if(A[i]<A[i-1]){//��A[i]�ؼ���С��ǰ�� 
			temp=A[i];//��temp�ݴ�A[i] 
			for(j=i-1;j>=0&&A[j]>temp;--j)//�������ǰ�����źõ�Ԫ�� 
				A[j+1]=A[j];//���д���temp��Ԫ�ض����Ųλ 
			A[j+1]=temp;//���Ƶ�����λ�� 
		}
} 
int main()
{

	return 0;
 }

