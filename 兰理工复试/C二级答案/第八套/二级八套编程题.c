#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int fun(int lim, int aa[MAX])
{
   int i,j,k=0;
  for(i=2;i<=lim;i++)                      /*求出小于或等于lim的全部素数*/
     { for(j=2;j<i;j++)
          if(i%j==0) break;
       if(j>=i) 
          aa[k++]=i;                       /*将求出的素数放入数组aa中*/
     }
  return k;                                 /*返回所求出的素数的个数*/
}
void main()
{
  FILE *wf;
  int limit,i,sum;
  int aa[MAX];
  system("CLS");
  printf("输入一个整数:");
  scanf("%d",&limit);
  sum=fun(limit,aa);        
  for(i=0;i<sum;i++)
     {
      if(i%10==0&&i!=0)    /*每行输出10个数*/
         printf("\n ");
      printf("%5d ",aa[i]);
    }
/******************************/
  wf=fopen("out.dat","w");
  sum=fun(15,aa);        
  for(i=0;i<sum;i++)
     {
      if(i%10==0&&i!=0)    /*每行输出10个数*/
         fprintf(wf,"\n");
      fprintf(wf,"%5d ",aa[i]);
    }
  fclose(wf);
/*****************************/
}
