#include<stdio.h>
bool Del_Min(Sqlist &L,ElemType &value){
//ɾ��˳�������СԪ�ؽ�� ��ͨ�������Ͳ���value������ֵ
//��ɾ���ɹ� �򷵻�true ���򷵻�false 
if(L.length==0)
	return false;//��� ��ֹ��������
	value=L.data[0];
	int pos=0;//�ٶ�0��Ԫ�ص�ֵ��С 
	for(int i=1;i<L.length;i++)//ѭ�� Ѱ�Ҿ�����Сֵ��Ԫ�� 
		if(L.data[i]<value){//��value���䵱ǰ������Сֵ��Ԫ�� 
			value=L.data[i];
			pos=i;
		}
		L.data[pos]=L.data[L.length-1];//�ճ���λ�������һ��Ԫ��� 
		L.length--;
		return true;	//��ʱ value��Ϊ��Сֵ 
} 
int main()
{

	return 0;
 }

