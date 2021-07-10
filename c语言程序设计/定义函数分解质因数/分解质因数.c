#include<stdio.h>
#include<windows.h>
int isprime(int t);
int main()
{
	printf("ÊäÈë·¶Î§Îª2-100000\n"); 
	int t;
	int y;
   scanf("%d",&t);
	y=isprime(t);
	if(y==1){
		int i;
		int cnt=0;
		for(i=2;i<=t;i++){
			if(t%i==0){
				cnt++;
				if(cnt==1){
					printf("%d=%d",t,i);
				}
				else{
					printf("x%d",i);
				}
				t=t/i;
				i=2;
			}
		}
	}
	else{
		printf("%d",t);
	}
	system("pause");
	return 0;
}
int isprime(int t)
{   int i;
	int isprime=1;
	int n=0;
	if(t==1){
		n=1;
	}
		else{
			for(i=2;i<t;i++){
				if(t%i==0){
					isprime=0;
					break;
				}
			}
		    if(isprime==0){
				n=1;
		    }
		    else{
				n=2;
		    }
		}
	    return n;
}


