#include<stdio.h>
void algorithm(int r[],int s,int t){
	int i=s,j=t,x=r[s];
	while(i<j){
		while(i<j&&r[j]>x)
			j=j-1;
			if(i<j){
				r[i]=r[j];
				i=i+1;
			}
		while(i<j&&r[i]<x)
			i=i+1;
			if(i<j){
				r[j]=r[i];
				j=j-1;
			}		
	}
	r[i]=x;
} 
int main()
{
	int r[]={6,1,2,3,4,5,7,8,9,10};
	algorithm(r,0,9);
	for(int i=0;i<10;i++){
		printf("%d",r[i]);
	}
	return 0;
 }
