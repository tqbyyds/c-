#include<stdio.h>
int main(void)
{
	int cnt;
	int x;
	int i;
	double sum=0.0;
	printf("��������Ҫ������������"); 
	scanf("%d",&cnt);
	int number[cnt];
	printf("������������ְ�-1����\n");
	 for(i=0;i<=cnt-1;i++){
	    	number[i]=0;
		}
	scanf("%d",&x);
	i=0;
	while(x!=-1){
		if (i<=cnt-1){
			number[i]=x;
			sum+=x;
		}
		i++;
		scanf("%d",&x);	
	}
	double average;
	average=sum/cnt;
	for(i=0;i<=cnt-1;i++){
		if(number[i]>average){
			printf("%d",number[i]);
		}
		
	}
	printf("%d",average);
	
	return 0;
	 
	 
}
