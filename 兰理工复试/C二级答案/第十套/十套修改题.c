#include  <stdlib.h>
#include  <stdio.h>
double fun(int m)
{
  double t=1.0;
  int i;
  for(i=2;i<=m;i++)
/*************found*************/
      t=t-1.0/i; 
/*************found**************/
      return t;
}
void main()
{int m;
 system("CLS");//清屏操作 //头文件是#include  <stdlib.h> 
 printf("\nPlease enter 1 integer numbers:\n");
 scanf("%d",&m);
 printf("\n\nThe result is %1f\n",fun(m));
}
