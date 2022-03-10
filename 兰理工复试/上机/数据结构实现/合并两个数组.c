#include<stdio.h>
void Merge(int *a,int *b,int *c){
	int i=0;
	int j=0;
	int k=0;
	while(i<5&&j<5){
		if(a[i]<b[j]){
			c[k++]=a[i++];
		}
		else{
			c[k++]=b[j++];
		}
	}
	while(i<5){
		c[k++]=a[i++];                                                                                                                          
	}
	while(j<5){
		c[k++]=b[j++];                                                                                                                          
	}  
	
}
int main(){
	int a[5]={1,3,5,7,9};
	int b[5]={2,4,6,8,10};
	int c[10]={0};
	Merge(a,b,c);
	int i;
	for(i=0;i<10;i++){
		printf("%d ",c[i]);
	}
	return 0;
}
