#include<stdio.h>
//�۰�������� 
void InsertSort(int A[],int n){
	int i,j,low,high,mid;
	for(i=2;i<=n;i++){//���ν�A[2]~A[n]����ǰ������������� 
		A[0]=A[i];//��A[i]�ݴ浽A[0] 
		low=1;high=i-1;//�����۰���ҵķ�Χ 
		while(low<=high){//�۰���ң�Ĭ�ϵ������� 
			mid=(low+high)/2;//ȡ�м�� 
			if(A[mid]>A[0]) high=mid-1;//��������ӱ� 
			else low=mid+1;//�����Ұ��ӱ� 
			//���Ƶ� low��ָλ�� ��A[mid]==A[0]ʱ Ϊ�˱�֤�㷨���ȶ��� Ӧ������
//mid��ָλ���ұ�Ѱ�Ҳ���λ��  
		}
		for(j=i-1;j>=high+1;--j)
			A[j+1]=A[j];//ͳһ����Ԫ�أ��ճ�����λ�� 
		A[high+1]=A[0];//������� 
	}
} 
//��low>highʱ�۰����Ӧֹͣ��Ӧ��[low,i-1]�ڵ�Ԫ��ȫ�����ƣ�����A[0]

 
int main()
{

	return 0;
 }

