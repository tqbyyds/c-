#include<stdio.h> 
#include<windows.h>
int main()
{int n=0;
int x;
scanf("%d",&x);
n++;
x/=10;
while(x>0){n++;
           x/=10;}
printf("%d\n",n);
system("pause");
    return 0;
}
