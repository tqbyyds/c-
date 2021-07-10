#include<stdio.h>

int main()
{
    int x=1;
    int cnt=0;
    int sum1=0;
    int sum2=0;
    int n;
    int m;
    scanf("%d %d",&n,&m);
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
            if(cnt<n){
                sum1+=x;
            }
            
        }
     }
        int t=1;
        int cnt1=0;
        while(cnt1<m){
            t++;
            int h;
            int isprime1=1;
            for(h=2;h<t;h++){
                    if(t%h==0){
                        isprime1=0;
                        break;
                     }
            
            }
            if(isprime1==1){
                   sum2+=t;
                    cnt1++;
            }
        }
    int y;
    y=sum2-sum1;
    printf("%d",y);
    
    return 0;
}