#include<stdio.h>
void swap(char*el1,char*el2,int width){
     int i=0;
     char s=0;
    for(i=0;i<width;i++){
        s=*el1;
        *el1=*el2;
        *el2=s;
        el1++;
        el2++;
    }
}
int cmp(void*el1,void*el2){
   return *(int*)el1-*(int*)el2;
}
void bubble_sort(void *base,int sz,int width ,int (*cmp)(void*el1,void*el2))
{
    int i,j;
    for(i=0;i<sz-1;i++){
        for(j=0;j<sz-1-i;j++){
            if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0){
                swap((char*)base+j*width,(char*)base+(j+1)*width,width);
            }
        }
    }
}
int main(void){
    int arr[]={6,8,9,3,2,0};
    bubble_sort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),cmp);
    int i=0;
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        printf("%d\n",arr[i]);
    }
}