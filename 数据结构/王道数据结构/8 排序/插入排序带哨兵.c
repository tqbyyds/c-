#include<stdio.h>
//ֱ�Ӳ������򣨴��ڱ��� 
void InsertSort(int A[],int n){
	int i,j
	for(i=2;i<=n;i++)//���ν�A[2]~A[n]���뵽ǰ������������ 
		if(A[i]<A[i-1]){//��A[i]�ؼ���С��ǰ�� 
			A[0]=A[i];//����Ϊ�ڱ� A[0]�����Ԫ�� 
			for(j=i-1;A[0]<A[j];--j)//�Ӻ���ǰ���Ҵ�����λ�� 
				A[j+1]=A[j];//���Ųλ 
			A[j+1]=A[0];//���Ƶ�����λ�� 
		}
} 
int main()
{

	return 0;
 }

