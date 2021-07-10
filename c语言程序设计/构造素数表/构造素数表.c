#include<stdio.h>
int main(void)
{
	const int maxnumber=25;
	int a[maxnumber];
	int i;
	int x;
	for(i=0;i<maxnumber;i++){
		a[i]=1;
	}
	for(x=2;x<maxnumber;x++){
    	if(a[x]){
	    	for(i=2;i*x<maxnumber;i++){
				a[x*i]=0;
			}
		}
	}
	for(i=2;i<maxnumber;i++){
		if(a[i]){
			printf("%d  ",i);
		}
	}
	return 0;
}
