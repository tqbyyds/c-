#include<stdio.h>
#include<stdlib.h>
int main(void){
    int number=3;
    int *a;
    int i;
    int x;
    a=(int*)malloc(number*seizeof(int));
    for(i=0;i<number;i++){
        scanf("%d",&x);
        a[i]=x;
    }
    printf("%d",a[1]);

    return 0;
}