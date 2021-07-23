#include<stdio.h>
int main(void){ 
    char *month[]={"January","February","March","April","June","July","August","September","October","November","December"};
    int i;
    scanf("%d",&i);
    printf("%s",month[i-1]);
    return 0;
}