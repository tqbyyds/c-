#include<stdio.h>
int main(void){
	int x;
	int y;
	int b;
	int c;
	int max1=0;
	int max2=0;
	int max;
	int a[101][2];
	int i;
	int j;
	int d;
	for(i=0;i<101;i++){
		for(j=0;j<2;j++){
			a[i][j]=0;
		}
	}
	printf("输入第一组数据\n");
	scanf("%d %d",&x,&b);
	while(x!=0){
		a[x][0]=b;
		if(max1<x){
			max1=x;
		}
		scanf("%d %d",&x,&b);
	}
	a[0][0]=b;
	printf("输入第二组数据\n");
	scanf("%d %d",&y,&c);
	while(y!=0){
		a[y][1]=c;
		if(max2<x){
			max2=x;
		}
		scanf("%d %d",&y,&c);
	}
	a[0][1]=c;
	if(max1>max2){
		max=max1;
	}
	else{
		max=max2;
	}
	for(i=max;i>=0;i--){
		d=a[i][0]+a[i][1];
		if(d!=0){
			if(i==1){
				printf("%dx+",d);
			}
			else if(i==0){
				printf("%d",d);
			}
			else{
				printf("%dx%d+",d,i);
			}
		}
	}
	return 0;	
}
