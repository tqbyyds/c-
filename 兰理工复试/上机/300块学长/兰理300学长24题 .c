#include<stdio.h>
int binnay(int a[],int n)
{
	//Ĭ�ϳ���Ϊ10
	int low=0,high=9,mid;
	while(low<high)
	{
		mid=(low+high)/2;
		if(n>a[mid])
			low=mid+1;
		else if(n<a[mid])
			high=mid-1;
		else  return (mid);//��ʾ�ɹ������أ� 	
	} 
	return -1;
}
int main()
{
	
	//1.���ó���Ϊ10�����飬Ҫ���ȡ�û���������ݣ���������ҵ����ݣ�
	//���ö��ֲ��ң��������ݵ��±꣬ʧ�ܷ���-1
	
	 int a[10];
	 int b;
	 int i; 
	 for(i=0;i<10;i++)
	 {
	 	
	 	scanf("%d",&a[i]);
	  } 
	  for(i=0;i<10;i++)
	 {
	 	printf("%d",a[i]); 
	  } 
	int n;
	printf("�������Ԫ��"); 
	scanf("%d",&n);
	int result=binnay(a,n);
	if(result==-1)
	{
		printf("����ʧ��");
 } 	else
	{	
		printf("��λ��Ϊ��%d",result);
	 } 
	 return 0;
}
