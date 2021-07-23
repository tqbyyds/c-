#include<stdio.h>

int main()
{int num;
int count=0;
int sum=0;
printf("输入一组数，输入-1结束输入\n");
do{scanf("%d",&num);
  if(num!=-1){
sum+=num;
count ++;}}
while(num!=-1);
printf("%lf",1.0*sum/count);
    return 0;
}