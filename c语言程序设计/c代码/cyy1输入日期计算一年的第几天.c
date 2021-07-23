#include<stdio.h>
int dayis(int year,int month,int day)
{   
    int i=0;
    int total=0;
    int arr[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=0;i<month;i++){
        total+=arr[i];
    }
    if(month>2){
        total+=(year%4==0&&year%100!=0||year%400==0);
    }
    total+=day;
    return total;
}
int main()
{
    int year,month,day,daynum;
    scanf("%d%d%d",&year,&month,&day);
    daynum=dayis(year,month,day);
    printf("%d",daynum);
    return 0;
}