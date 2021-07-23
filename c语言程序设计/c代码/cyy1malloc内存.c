#include<stdio.h>
#include<stdlib.h>
int main(void){
    void *a;
    int cnt=0;
    while(a=malloc(100*1024*1024)){
       cnt++; 
    }
    printf("malloc到了%d*100Mb内存",cnt);
    return 0;
}
    