#include<stdio.h>

int main()
{
    int x;
    int cnt=0;
    for(x=2;x<100;x++){
        int i;
        int isprime=1;
        for(i=2;i<x;i++){
            if(x%i==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            printf("%d\t",x);
            cnt ++;
            if(cnt%5==0){
                printf("\n");
            }
        }
    }
    return 0;
}