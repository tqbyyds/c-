#include<stdio.h>
#include<stdlib.h>
int main(void){
    int number1;
    int cnt=0;
    int number;
    scanf("%d",&number1);
    number=number1+1;
    int *a;
    a=(int*)malloc(number*sizeof(int));
    int i;
    a[0]=0;
    int sum=0;
    for(i=1;i<number;i++){
        *(a+i)=1;
    }
    do{ sum=0;
        for(i=1;i<number;i++){
            if(a[i]){
                cnt++;
                if(cnt%3==0){
                    a[i]=0;
                }
            }
            sum+=a[i];
         }
        cnt%=3;
    }
    while(sum>1);
    for(i=1;i<number;i++){
        if(a[i]==1){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
    