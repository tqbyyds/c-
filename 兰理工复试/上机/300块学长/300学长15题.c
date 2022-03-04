#include<stdio.h>
int main(){
	int a[4][4]={{1,2,3,4},
				{5,6,7,8},
				{9,10,11,12},
				{13,14,15,16}};
	int i,j;
	int b=0;
	int c=0;
	int max=a[i][j];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(max<a[i][j]){
				max=a[i][j];
				b=i;
				c=j;
			}
		}
	}
	printf("最大值%d 行%d 列%d",max,b,c); 
} 
