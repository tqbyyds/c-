#include<stdio.h>
//���������
void BuildMaxHeap(int A[],int len){
	for(int i=len/2;i>0;i--)//�Ӻ���ǰ�������з��ն˽��
	HeadAdjust(A,i,len); 
}
//����kΪ������������Ϊ�����
void HeadAjust(int A[],int k,int len){
	A[0]=A[k];//A[0]�ݴ������ĸ����
	for(int i=2*k;i<=len;i*=2){//��key�ϴ���ӽ����±�
		if(i<len&&A[i]<A[i+1])
			i++;//ȡkey�ϴ���ӽ����±� 
		if(A[0]>=A[i]) break;//ɸѡ���� 
		else{
			A[k]=A[i];//��A[i]������˫�׽���� 
			k=i;//�޸�kֵ �Ա��������ɸѡ 
		}
		A[k]=A[0];//��ɸѡ����ֵ��������λ�� 
	} 
}
//������������߼�
void HeapSort(int A[],int len){
	BuildMaxHeap(A,len);//��ʼ����
	for(int i=len;i>1;i--){//n-1�˵Ľ����ͽ��ѹ��� 
		swap(A[i],A[1]);//�Ѷ�Ԫ�غͶѵ�Ԫ�ؽ��� 
		HeadAdjust(A,1,i-1);//��ʣ��Ĵ�����Ԫ������ɶ� 
	} 
} 
int main()
{

	return 0;
 }

