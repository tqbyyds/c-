#include<stdio.h>
#include <stdlib.h>
#define N 256 
int* yinzi(int n){
	int i=0;
	int k=0;
	int count=0;
	int *number=(int *)malloc(sizeof(int)*N);
    	for(i=1;i<n;i++){
    		if(n%i==0){
    			number[k++]=i;
    			count++;
			}
		}
	for(i=count;i<N;i++){
		number[i]=0;
	}
	return number;
}
int Thesum(int *a){
	int sum=0;
	int i=0;
	while(a[i]){
		sum+=a[i];
		i++;
	}
	return sum;
}
int main(){
	int i=0;
	int n=0;
	int count=0; 
	int *number;
 	for(i=1;i<=1000;i++){
		number=yinzi(i);
		if(Thesum(number)==i){
			int j=0;
			while(number[j]){
				if(j==0){
					printf("%d=%d",i,number[j++]);
				}
				else{
					printf("+%d",number[j++]);
				}
			}
			printf("\n");
		}	
		free(number);
	}
	return 0;
} 
/*
#include<stdio.h>
#define N 1000
int main()
{
    int i,j,k,n,sum;
    int a[256];
    for(i=2;i<=N;i++)
    {
        sum=a[0]=1;
        k=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                sum+=j;
                a[++k]=j;
            }
            
        }
        if(i==sum)
        {
            printf("%d=%d",i,a[0]);
            for(n=1;n<=k;n++)
                printf("+%d",a[n]);
            printf("\n");
        }
        
    }
    return 0;
}*/
