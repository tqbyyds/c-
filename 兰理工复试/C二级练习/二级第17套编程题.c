#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void fun (int x, int pp[], int *n)
{
  int i;
  *n=0;
  int j=0;
  for(i=1;i<=x;i++){
  	if(x%i==0&&i%2!=0){
  		pp[j++]=i;
  		(*n)++;
	  }
  } 
}

void main ()
{ 
  FILE *wf;
  int  x,aa[1000], n, i ;
  system("CLS");
  printf("\nPlease enter an integer number : \n ") ;
  scanf ("%d", &x) ;
  fun (x, aa, &n) ;
  for (i=0 ; i<n ; i++)
      printf ("%d ", aa [i]);
  printf ("\n ") ;
/******************************/
  wf=fopen("out.dat","w");
  fun (30, aa, &n) ;
  for (i=0 ; i<n ; i++)
      fprintf (wf,"%d ", aa [i]);
  fclose(wf);
/*****************************/
}
