#include<stdio.h>
typedef struct{//���ұ�����ݽṹ��˳��� 
	ElemType *elem;//��̬�����ַ 
	int TableLen//��ĳ��� 
}SSTable; 
//�۰����
int Binary_Search(SSTable L,ElemType key){
	int low=0,high=TableLen-1,mid;
	while(low<=high){
		mid=(low+high)/2;//ȡ�м�λ�� 
		if(L.elem[mid]==key)
			return mid;//���ҳɹ��򷵻�����λ�� 
		else if(L.elem[mid]>key)
			high=mid-1;//��ǰ�벿�ּ������� 
		else
			low=mid+1;//�Ӻ�벿�ּ������� 
	}
	return -1; //����ʧ�� ����-1 
} 
int main()
{

	return 0;
 }

