#include<stdio.h>

int main()
{
    int a,b;
    int i=0;
    int min;
    int t;
    scanf("%d %d",&a,&b);
    if(a<b){
        min=a;
    }
    else{
        min=b;
    }
    while(i<=min){i++;
        if(a%i==0){
            if(b%i==0){
                t=i;
            }
        }
    }
    printf("最大公约数为%d",t);
    return 0;
}