#include<stdio.h>
#define ElemType int 
#define MaxSize 50//�������Ա����󳤶� 
typedef struct{
	ElemType data [MaxSize];//˳����Ԫ��  
	int length;//˳���ǰ�ĳ��� 
} Sqlist;//˳�������Ͷ���
//����������ʼ��һ��˳��� 
void InitList(Sqlist *L){ 
	int i;
	for(i=0;i<MaxSize;i++); //����������Ԫ������ΪĬ�ϳ�ʼֵ 
		L->data[i]=0;
	L->length=0;//˳����ʼ����Ϊ0 
}
//ע�⣡�������Ա���Ԫ�ص�λ���Ǵ�1��ʼ�� �������е�Ԫ���±��Ǵ�0��ʼ�� 
int ListInsert(Sqlist *L,int i,int e){
	if(i<1||i>L->length+1)//�ж�i�ķ�Χ�Ƿ���Ч 
		return 0;
	if(L->length>=MaxSize)//��ǰ�洢�ռ��������ܲ���
		return 0;
		int j;
	for(j=L->length;j>=i;j--)//����i��Ԫ�ؼ�֮���Ԫ�غ��� 
		L->data[j]=L->data[j-1];
	L->data[i-1]=e;//��λ��i������e 
	L->length++;//���ȼ�1
	return 1;
}
int ListDelete(Sqlist *L,int i,int *e){
	if(i<1||i>L->length)//�ж�i�ķ�Χ�Ƿ���Ч 
		return 0;
	*e=L->data[i-1];
	for(int j=i;j<L->length;j++)//����i��Ԫ�ؼ�֮���Ԫ�غ�ǰ�� 
		L->data[j-1]=L->data[j]; 
	L->length--;//���ȼ�1
	return 1;
}
int GetElem(Sqlist L,int i){//��λ���� 
	return L.data[i-1];
}
int LocateElem(Sqlist L,int e){//��ֵ����  
	for(int i=0;i<L.length;i++)
		if(L.data[i]==e)
			return i+1;//�����±�Ϊi��Ԫ��ֵ����e,������λ��i+1 
	return 0;//�˳�ѭ����˵������ʧ���� 
} 
int main()
{
	Sqlist L;//����һ��˳��� 
	InitList(&L);//��ʼ��˳��� 
	//������뼸��Ԫ��
	ListInsert(&L,1,2); 
	ListInsert(&L,2,3); 
	ListInsert(&L,3,4); 
	ListInsert(&L,4,5); 
	ListInsert(&L,5,6); 
	ListInsert(&L,6,7); 
	ListInsert(&L,7,8); 
	ListInsert(&L,8,9); 
	ListInsert(&L,9,10); 
	ListInsert(&L,10,11); 
	int e=-1;//�ñ���e��ɾ����Ԫ��"������"
	if(ListDelete(&L,3,&e))
		printf("��ɾ��������Ԫ�أ�ɾ��Ԫ��ֵΪ=%d\n",e);
	else
		printf("λ��i���Ϸ���ɾ��ʧ��\n");
	int i=2;
	printf("��%dλ��%d\n",i,GetElem(L,i));
	printf("%d�ڵ�%dλ\n",i,LocateElem(L,i));
	return 0;
 }
