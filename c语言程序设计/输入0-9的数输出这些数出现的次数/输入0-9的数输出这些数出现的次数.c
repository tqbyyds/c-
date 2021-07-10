#include<stdio.h>
int main()
{
	printf("ÊäÈë·¶Î§Îª0-9\n");
	int number[10];
	int x;
	scanf("%d",&x);
	int i;
	for(i=0;i<=9;i++){
		number[i]=0;
	}
	while(x!=-1){
		if(x>=0&&x<=9){
		    number[x]++;
		}
		scanf("%d",&x);
	}
	for(i=0;i<=9;i++){
		printf(" %d:%d ",i,number[i]);
	}
	return 0;	 
}
