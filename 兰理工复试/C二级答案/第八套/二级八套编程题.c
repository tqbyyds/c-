#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int fun(int lim, int aa[MAX])
{
   int i,j,k=0;
  for(i=2;i<=lim;i++)                      /*���С�ڻ����lim��ȫ������*/
     { for(j=2;j<i;j++)
          if(i%j==0) break;
       if(j>=i) 
          aa[k++]=i;                       /*�������������������aa��*/
     }
  return k;                                 /*����������������ĸ���*/
}
void main()
{
  FILE *wf;
  int limit,i,sum;
  int aa[MAX];
  system("CLS");
  printf("����һ������:");
  scanf("%d",&limit);
  sum=fun(limit,aa);        
  for(i=0;i<sum;i++)
     {
      if(i%10==0&&i!=0)    /*ÿ�����10����*/
         printf("\n ");
      printf("%5d ",aa[i]);
    }
/******************************/
  wf=fopen("out.dat","w");
  sum=fun(15,aa);        
  for(i=0;i<sum;i++)
     {
      if(i%10==0&&i!=0)    /*ÿ�����10����*/
         fprintf(wf,"\n");
      fprintf(wf,"%5d ",aa[i]);
    }
  fclose(wf);
/*****************************/
}
