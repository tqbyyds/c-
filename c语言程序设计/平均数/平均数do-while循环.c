#include<stdio.h>

int main()
{int num;
int count=0;
int sum=0;
printf("����һ����������-1��������\n");
do{scanf("%d",&num);
  if(num!=-1){
sum+=num;
count ++;}}
while(num!=-1);
printf("%lf",1.0*sum/count);
    return 0;
}