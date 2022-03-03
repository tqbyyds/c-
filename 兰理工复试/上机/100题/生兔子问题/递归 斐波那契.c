#include<stdio.h>
int Feibonacci(int n){
    if(n==1||n==2)
        return 1;
    else 
        return Feibonacci(n-1)+Feibonacci(n-2);
}
int main(){
    int n;  // 要计算的月份 
 
    printf("输入要计算的月数：");
    scanf("%d", &n); 

    printf("%d个月的兔子总数为%d\n", n, Feibonacci(n));
    
    return 0;
