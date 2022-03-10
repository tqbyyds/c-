#include <stdio.h>
#define N 80
int fun(char *str)
{
		int n=strlen(str);
	if(n%2==0)
		return 0; 
	int t=n/2;
	for(int i;i<=t;i++){
		if(str[i]!=str[n-1-i]){
			return 0;
		}
	}
	return 1; 
}

void main()
{
	 char s[N];
	 FILE *out;
         char *test[]={"1234321","123421","123321","abcdCBA"};
	 int i;
	 printf("Enter a string : ");
	 gets(s);
	 printf("\n\n");
	 puts(s);
	 if(fun(s))
		printf("YES\n");
	 else
		printf("NO\n"); 
	 /************************************/
	 out=fopen("out.dat","w");
	 for(i=0;i<4;i++)
	 	if(fun(test[i]))
			fprintf(out,"YES\n");
		else
			fprintf(out,"NO\n");
	 fclose(out);
	 /************************************/
}
