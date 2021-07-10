#include<stdio.h>

int main()
{
    int x;
    int mask=1;
    int t;
    int d;
    scanf("%d",&x);
    t=x;
    while(x>9){
        x/=10;
        mask*=10;
    }
    do{
        d=t/mask;
        printf("%d",d);
        if(mask>=10){
            printf(" ");
        }
        t%=mask;
        mask/=10;
        
    }while(mask>0);
    return 0;
}