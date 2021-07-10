#include<stdio.h>
#include<windows.h>
int sum(int n);
int main()
{
    int n;
	int m;
	int ans;
	scanf("%d %d",&n,&m);
	ans=sum(m)-sum(n-1);
	printf("%d",ans);
	system("pause");
	return 0;
}
int sum(int n)
{
	 int x=1;
    int cnt=0;
    int sum1=0;
while(cnt<n){
        x++;
        int i;
        int isprime=1;
        for(i=2;i<x;i++){
              if(x%i==0){
                isprime=0;
                break;
              }
            
        }
        if(isprime==1){
            cnt++;
            sum1+=x;
            
            
        }
    }
    return sum1;
}

