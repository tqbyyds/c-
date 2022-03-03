#include<stdio.h>
/*最小公倍数=输入的两个数之积除于它们的最大公约数，关键是求出最大公约数；

求最大公约数用辗转相除法（又名欧几里德算法）*/
//枚举 
int main()
{
    int a,b;
    int i=1;
    int min;
    int t;
    scanf("%d %d",&a,&b);
    if(a<b){
        min=a;
    }
    else{
        min=b;
    }
for(i=1;i<=min;i++){
	if(a%i==0&&b%i==0){
		t=i;
	}
}
    printf("最大公约数是%d最小公倍数%d",t,(a*b)/t);
    return 0;
}
/*辗转相除法求最大公约数 
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a<b){
        c=a;
        a=b;
        b=c;
    }
    while(a%b!=0){
        int t;
        t=a%b;
        a=b;
        b=t;
    }
    printf("鏈�澶у叕绾︽暟涓�%d",b);
    return 0;
}*/ 
