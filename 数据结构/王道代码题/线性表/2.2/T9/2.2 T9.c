#include<stdio.h>
void SearchExchangeInsert(ElemType a[],ElemType x){
	int low=0,high=n-1,mid;
	while(low<=high){
		mid=(low+high)/2;//���м�λ��
		if(A[mid]==x) break;//�ҵ�x �˳�whileѭ�� 
		else if(A[mid]<x) low=mid+1;//���е�mid���Ұ벿��ȥ�� 
		else high=mid-1; //���е�mid����벿��ȥ�� 
	}//����if���ֻ��ִ��һ��
	if(A[mid]==x&&mid!=n-1){//�����һ��Ԫ����x��� �򲻴��������̽����Ĳ���
	t=A[mid];A[mid]=A[mid+1];A[mid+1]=t; 
	}
	if(low>high){//����ʧ�� ����Ԫ��x 
		for(i=n-1;i>high;i--) A[i+1]=A[i];//����Ԫ�� 
		A[i+1]=x;//����x 
	}            //�������� 
} 
int main()
{

	return 0;
 }

