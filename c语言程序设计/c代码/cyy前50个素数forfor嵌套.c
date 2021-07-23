#include<stdio.h>

int main()
{
    int x;
    int cnt=0;
    for(x=2;cnt<50;x++)
    {int isprime=1;int i;
    for(i=2;i<x;i++)
    {if(x%i==0){isprime=0;break;}
    }if(isprime==1)
    {cnt++;printf("%d\t",x);
    if(cnt%5==0){printf("\n");}
    }
    }
    
    return 0;
}