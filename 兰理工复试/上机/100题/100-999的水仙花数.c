#include<stdio.h>
int main(){
	int i=0;
	int j=0;
	int k=0;
	int count =0;
	for(i=1;i<=9;i++){
		for(j=0;j<=9;j++){
			for(k=0;k<=9;k++){
				if(i*i*i+j*j*j+k*k*k==i*100+j*10+k){
					count++;
					if(count%5==0){
						printf("\n");
					}
				 	printf("%d ",i*100+j*10+k);
				}
			}
		}
	}
}
