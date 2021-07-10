#include<stdio.h>
#include<windows.h> 
int main()
{int a=0;
scanf("%d",&a);
int b=0;
int c=0;
int d=0;
int e=0;
b=a/100;
c=(a/10)%10;
d=a%10;
e=d*100+c*10+b;
printf("%d",e); 
system("pause");
return 0;
 } 
