#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{srand(time(0));
int a=rand();
int b;
int count=0;
printf("我已经想好一个数了\n");
a%=100;
printf("请输入一个1到100的数");
scanf("%d",&b);
if(a==b){count=1;
printf("您用了一次就猜对了\n");}
else{while(a!=b){count++;
if(b>a){printf("您的数大了\n");}
else{printf("您的数小了\n");}
scanf("%d",&b);}
printf("你用了%d次猜对了",count);}
    return 0;
}