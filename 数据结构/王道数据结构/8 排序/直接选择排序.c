#include<stdio.h>
//��ѡ������
//����
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
} 
void SelectSort(int A[],int n){
	for(int i=0;i<n-1;i++){//һ������n-1�� 
		int min=i;//��¼��СԪ��λ�� 
		for(int j=i+1;j<n;j++)//��A[i....n-1]��ѡ����С��Ԫ�� 
			if(A[j]<A[min]) min=j;//������СԪ��λ�� 
		if(min!=i) swap(A[i],A[min]);//��װ��swap()�������ƶ�Ԫ��3�� 
	}
} 
int main()
{

	return 0;
 }

