#include<stdio.h>

int main()
{int i;
int isprime=1;
int x;
scanf("%d",&x);
if(x==1){
	printf("��������");
}
else{
	for(i=2;i<x;i++){
		if(x%i==0){
			isprime=0;
			break;
		}
	}
    if(isprime==0){
		printf("��������");
    }
    else{
		printf("������");
    }
}
    return 0;
}
