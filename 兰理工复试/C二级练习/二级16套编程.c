#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fun(int score[],int m, int below[])
{
	int average,i;
	int j=0;
	int sum=0;
	int count=0;
	for(i=0;i<m;i++){
		sum+=score[i];
	}
	average=sum/m; 
	for(i=0;i<m;i++){
		if(score[i]<average){
			count++;
			below[j++]=score[i];
		}
	} 
     return count;                                                    
}
void main()
{
  FILE *wf;
  int i, n, below[9];
  int score[9]={10,20,30,40,50,60,70,80,90};
  system("CLS");
  n=fun(score, 9, below);
  printf("\nBelow the average score are: ");
  for(i=0;i<n;i++)  
     printf("%d ",below[i]);
/******************************/
  wf=fopen("out.dat","w");
  for(i=0;i<n;i++)  
     fprintf(wf,"%d ",below[i]);
  fclose(wf);
/*****************************/
}
