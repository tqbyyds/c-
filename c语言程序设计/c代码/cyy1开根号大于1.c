#include<stdio.h>
int main(void){
    double a;
    double b=1.0;
    int d=1;
    double i=1.0;
    int cnt=0;
    int p=0;
    scanf("%lf",&a);
  while(cnt<200){
        i+=b/d;
        cnt++;
    if(i*i*i==a){
            printf("%f",i);
            p=1;
            break;
    }
       if(i*i*i>a){
            i-=b/d;
            d*=10;
        }
  }
  if(p==0){
     printf("%f",i);
  }  
 
 return 0;
    
}