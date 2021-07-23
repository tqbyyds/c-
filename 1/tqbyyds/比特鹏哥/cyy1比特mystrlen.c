#include<stdio.h>
int mystrlen(char *a)
{
    int cnt=0;
    while(*a!=0){
        cnt++;
        a++;
    }
    return cnt;
}
int main(void)
{
    char a[]="abcdg";
    printf("%d\n",mystrlen(a));
    return 0;
    
}