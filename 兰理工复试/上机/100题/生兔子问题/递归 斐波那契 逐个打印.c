#include<stdio.h>
int Feibonacci(int n){
    if(n==1||n==2)
        return 1;
    else 
        return Feibonacci(n-1)+Feibonacci(n-2);
}
int main(){
    int i;  // 要计算的月份 
 for(i=1;i<=10;i++){
 	printf("%d\n", Feibonacci(i));
 }

    
    
    return 0;
}
