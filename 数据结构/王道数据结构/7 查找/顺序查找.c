#include<stdio.h>
typedef struct{//���ұ�����ݽṹ��˳��� 
	ElemType *elem;//��̬�����ַ 
	int TableLen//��ĳ��� 
}SSTable; 
//˳�����
int Search_Seq(SSTable,ElemType key){
	int i;
	for(i=0;i<ST.Tablelen&&ST.elem[i]!=key;++i);
	//���ҳɹ� �򷵻�Ԫ���±� ����ʧ�� �򷵻�-1 
	return i==ST.TableLen?-1:i;
} 
int main()
{

	return 0;
 }

