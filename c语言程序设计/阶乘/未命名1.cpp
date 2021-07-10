#include<stdio.h>
int main()
{int fact=1;
int i=1;
int n;
scanf("%d",&n);
for(i=1;i<=n;i++){
	fact*=i;
}
printf("%d",fact);
return 0;
}
