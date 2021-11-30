#include<stdio.h>
void algorithm(int r[],int s,int t){
	int i=s,j=t,x=r[s];
	while(i<j){
		while(i<j&&r[j]%2==0)
			j=j-1;
			if(i<j){
				r[i]=r[j];
				i=i+1;
			}
		while(i<j&&r[i]%2==1)
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
	int r[]={1,2,3,4,5};
	algorithm(r,0,4);
	for(int i=0;i<5;i++){
		printf("%d",r[i]);
	}
	return 0;
 }

