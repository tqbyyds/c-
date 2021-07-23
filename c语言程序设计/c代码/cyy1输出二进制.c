#include<stdio.h>
int main(void)
{
    unsigned int mask=1u<<31;
    int num;
    scanf("%d",&num);
    for(;mask;mask>>=1)
    {
        printf("%d",num&mask?1:0);
    }
    return 0;
}
