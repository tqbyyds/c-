#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a<b){
        c=a;
        a=b;
        b=c;
    }
    while(a%b!=0){
        int t;
        t=a%b;
        a=b;
        b=t;
    }
    printf("最大公约数为%d",b);
    return 0;
}