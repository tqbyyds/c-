#include<stdio.h>
int main(void){
    int arr[10][10]={0};
    int i=0;
    int j=0;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(j==0||i==j){
                arr[i][j]=1;//i是行号j是列号
            }//第一列和对角线赋值1
            if(i!=0&&i!=j){
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
            }//其余的元素为对上一行元素与左面元素的和
        }
    }
    for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                if(j<=i){//只输出下三角形
                    printf("%d ",arr[i][j]);
                }
            }
            printf("\n");        
    }
    return 0;
}