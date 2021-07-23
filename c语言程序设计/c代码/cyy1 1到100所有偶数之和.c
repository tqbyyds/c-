#include<stdio.h>
int main(void)
{
    int i;
    int sum=0;
    for(i=1;i<101;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}
