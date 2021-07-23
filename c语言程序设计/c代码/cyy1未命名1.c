#include<stdio.h>
int main(void)
{
	int cnt;
	int x;
	int i;
	double sum=0.0;
	printf("请输入你要输入数的数量"); 
	scanf("%d",&cnt);
	int number[cnt];
	printf("请输入你的数字按-1结束\n");
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
