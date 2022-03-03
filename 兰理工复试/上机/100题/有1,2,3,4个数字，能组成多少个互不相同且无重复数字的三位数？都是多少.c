#include<stdio.h>
int main(){
	int i,j,k,sum=0;
	for(i=1;i<=4;i++){
		for(j=1;j<=4;j++){
			for(k=1;k<=4;k++){
				if(i!=k&&i!=j&&j!=k){
					sum++;
					printf("%d\n",i*1000+j*100+k);
				}
				
			}
		}	
	}
	printf("%d",sum);
		
	return 0;
} 
