#include<stdio.h>
//����
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;	
} 
//ð������
void BubbleSort(int A[],int n){
	//i��ָλ��֮ǰ��Ԫ�ض������� 
	for(int i=0;i<n-1;i++){
		bool flag=false;      //��ʾ����ð���Ƿ��������ı�־ 
		for(int j=n-1;j>i;j--)//һ��ð�ݹ��� 
			if(A[j-1]>A[j]){//��Ϊ���� 
				swap(A[j-1],A[j]);//���� 
				flag=true;
			}
			if(flag==false)
				return;//���˱�����û�з������� ˵�����Ѿ�����  ��ǰ����ѭ�� 
	}
} 
int main()
{

	return 0;
 }

