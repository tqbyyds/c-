#include<stdio.h>
#define MaxSize 50//�������Ա����󳤶� 
typedef struct{
	int data [MaxSize];//˳����Ԫ�� int��ElemType 
	int length;//˳���ǰ�ĳ��� 
} Sqlist;//˳�������Ͷ���
//����������ʼ��һ��˳��� 
void InitList(Sqlist* L){
	for(int i=0;i<MaxSize;i++); //����������Ԫ������ΪĬ�ϳ�ʼֵ 
		L.data[i]=0;
	L.length=0;//˳����ʼ����Ϊ0 
}
bool void ListInsert(SeqList* L,int i,int e){
	if(i<1||i>L.length+1)//�ж�i�ķ�Χ�Ƿ���Ч 
		return false;
	if(L.length>=Maxize)//��ǰ�洢�ռ��������ܲ��� 
		return false;
	int j=0;
	for(j=L.length;j>=i;j--)//����i��Ԫ�ؼ�֮���Ԫ�غ��� 
		L.data[j]=L.data[j-1];
	L.data[i-1]=e;//��λ��i������e 
	L.length++;//���ȼ�1
	return true;
}
bool void ListDelete(SeqList* L,int i,int* e){
	if(i<1||i>L.length+1)//�ж�i�ķ�Χ�Ƿ���Ч 
		return false;
	*e=L.data[i-1];
	int j=0;
	for(j=i;j<L.length;j++)//����i��Ԫ�ؼ�֮���Ԫ�غ�ǰ�� 
		L.data[j-1]=L.data[j]; 
	L.length--;//���ȼ�1
	return true;
}

int main()
{
	Sqlist L;//����һ��˳��� 
	InitList(&L);//��ʼ��˳��� 
	//������뼸��Ԫ��
	ListInsert(L,3,3); 
	int e=-1;//�ñ���e��ɾ����Ԫ��"������"
	if(ListDelete(L,3,e))
		printf("��ɾ��������Ԫ�أ�ɾ��Ԫ��ֵΪ=%d\n",e);
	else
		printf("λ��i���Ϸ���ɾ��ʧ��\n"); 
	return 0;
 }

