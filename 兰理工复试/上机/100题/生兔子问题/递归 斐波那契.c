#include<stdio.h>
int Feibonacci(int n){
    if(n==1||n==2)
        return 1;
    else 
        return Feibonacci(n-1)+Feibonacci(n-2);
}
int main(){
    int n;  // Ҫ������·� 
 
    printf("����Ҫ�����������");
    scanf("%d", &n); 

    printf("%d���µ���������Ϊ%d\n", n, Feibonacci(n));
    
    return 0;
