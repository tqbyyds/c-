#include <stdio.h>
void fun(int  a, int  b, long  *c)
{
	int a1=a%10;
	int a10=a/10;
	int b1=b%10;
	int b10=b/10;
	*c=a1*1000+b1*100+a10*10+b10; 
}
void main()
{  int  a,b; long  c;void NONO ();
   printf("Input a, b:");
   scanf("%d%d", &a, &b);
   fun(a, b, &c);
   printf("The result is: %ld\n", c);
   NONO();
}
void NONO ()
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
  FILE *rf, *wf ;
  int i, a,b ; long c ;

  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%d,%d", &a, &b) ;
    fun(a, b, &c) ;
    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;
  }
  fclose(rf) ;
  fclose(wf) ;
}

