#include<stdio.h>
typedef struct{//���ұ�����ݽṹ��˳��� 
	ElemType *elem;//��̬�����ַ 
	int TableLen//��ĳ��� 
}SSTable; 
//˳�����
int Search_Seq(SSTable,ElemType key){
	ST.elem[0]=key;//�ڱ�
	int i;
	for(i=ST.TableLen;ST.elem[i]!=key;--i);
	return i; //���ҳɹ� �򷵻�Ԫ���±� ����ʧ���򷵻�0 
}
int main()
{

	return 0;
 }

