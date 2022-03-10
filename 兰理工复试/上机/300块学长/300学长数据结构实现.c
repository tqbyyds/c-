#include<stdio.h>


typedef int ElemType;
typedef struct Sqlist{
	
	ElemType *elem;
	ElemType listsize;
	ElemType length;	
};//����һ�������б�Ľṹ�� 


//��������
 void InputData(Sqlist &La)
 {
 	ElemType data;
 	//i ��һ�����ã������ݽ������飬����洢����������ĳ���. 
 	for(int i=0;;i++)
 	{
 		scanf("%d",&data);
 		if(data!=9999)
 		{
 			La.elem[i]=data;
 			La.length++;
		 }
 		else
 		 break; 		
	 }
  }
 
void OutputData(Sqlist La)
{
	for(int i=0;i<La.length;i++)
	{
		printf("%d ",La.elem[i]);
	}
	printf("��ӡ������\n");	
 } 
 
//�ϲ�����   ����Ӻ������޸ģ�һ����&�� 
void MergeList(Sqlist La,Sqlist Lb,Sqlist &Lc)
{
	int i,j,k;
	i=j=k=0;
	//Lc���г�ʼ����������д���LaLb������ 
	Lc.length=La.length+Lb.length;
	Lc.listsize=La.listsize+Lb.listsize;
	Lc.elem=new ElemType[Lc.listsize]; 
	
	while(i<=La.length-1&&j<=Lb.length-1)
	{
		ElemType pa=La.elem[i];//pa��ȡLaԪ�� 
		ElemType pb= Lb.elem[j];//pb��ȡLbԪ��
		
		if(pa<=pb)
		{
			Lc.elem[k]=pa;
			i++;//La���ƶ� 
			k++;	
		}		
		else
		{
			Lc.elem[k]=pb;
			j++;//Lb���ƶ� 
			k++;		
		 } 	
	 } 
	 
	 //����La��ʣ������
	 while(i<=La.length-1)
	 {
	 	ElemType pa =La.elem[i];//pa��ȡLaԪ�� 
	 	Lc.elem[k]=pa;
	 	k++;
	 	i++; 	
	 }
	 
	 
	 //����Lb��ʣ������ 
	while(j<=Lb.length-1)
	 {
	 	ElemType pb =Lb.elem[j];//pa��ȡLaԪ�� 
	 	Lc.elem[k]=pb;
	 	k++;
	 	j++; 	
	 }
	
	
}
int FindData(Sqlist La,ElemType n){
 	
 	for(int i=0;i<La.length;i++)
 	{
	 
	 	if(La.elem[i]==n) return i;
	 } 
 	
 	
 	return -1;
 } 
 
int main()
{
	
	//˳���Ҫ���㴴��һ����̬˳���ʵ������������ϲ�����
	//��������ݲ����ƣ���9999��ʾ������ݻ�ȡ������
	 
	Sqlist La,Lb,Lc;//����������LaLb�ֱ𱣴��������飬Lc����ϲ�������� 
	
	//��ʼ��La�� 
	La.elem=new ElemType[100];
	La.length=0;
	La.listsize=100;
	//��ʼ��Lb�� 
	Lb.elem=new ElemType[100];
	Lb.length=0;
	Lb.listsize=100;
	
	printf("����La���밴��˳�����룬��9999����\n"); 
	InputData(La);
	 
//	printf("����Lb���밴��˳�����룬��9999����\n"); 
//	InputData(Lb);
//	 OutputData(La);
//	 OutputData(Lb);
//	MergeList(La,Lb,Lc);
//	
//	for(int i=0;i<Lc.length;i++)
//	{
//		printf("%d ",Lc.elem[i]);
//	}
//	OutputData(Lc);

	//дһ���Ӻ���������ĳһԪ�أ��ɹ������±꣬ʧ�ܷ���-1��
//	 
	int result =FindData(La,3);
	if(result==-1) printf("δ�ҵ���-1");
	else 
	printf("��ǰ�±�Ϊ:%d",result); 
	return 0;
	//1.������ݽṹ����֪ʶ����ܡ�
	//2.���ϴ���һ������ 
	//3.ʵ������ߵ�ɾ�����޸Ĺ��ܣ������±꣩ 
	
 } 
