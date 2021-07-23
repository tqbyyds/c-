#include<stdio.h>
void print(int *arr,int sz)
{
    int i=0;
    for(i=0;i<sz;i++){
        printf(" %d",arr[i]);
    }
    
}
void move(int *arr,int sz){
    int left=0;
    int right=sz-1;
    while(left<right){
        while(left<right&&arr[left]%2==1){
            left++;            
        }//左边开始找偶数
        while(left<right&&arr[right]%2==0){
            right--;
        }//右边找奇数
        int tmp;
        tmp=arr[left];
        arr[left]=arr[right];//交换
        arr[right]=tmp;
    }//一轮结束后left的地址变奇数right的地址变偶数
}//left地址的数不再是偶数left可以再进行自增，right同理
int main(void)
{
    int arr[10]={2,4,6,8,10,1,3,5,7,9};
    int sz=sizeof(arr)/sizeof(arr[0]);
    move(arr,sz);
    print(arr,sz);
    return 0;
}