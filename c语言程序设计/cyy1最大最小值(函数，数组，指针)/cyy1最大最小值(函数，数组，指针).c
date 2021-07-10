#include<stdio.h>
void maxmin(int a[],int len,int *max,int *min);
int main(void){
    int a[]={1,3,6,9,10,98,24,44,41,12};
    int max;
    int min;
    maxmin(a,sizeof(a)/sizeof(a[0]),&max,&min);
    printf("最大值%d\n最小值%d",max,min);
    return 0;
}
void maxmin(int a[],int len,int *max,int *min){
    *max=a[0];
    *min=a[0];
    
    for(int i=0;i<len;i++){
        if(a[i]<*min){
            *min=a[i];
        }
        if(a[i]>*max){
            *max=a[i];
        }
    }
    return 0;
}
    