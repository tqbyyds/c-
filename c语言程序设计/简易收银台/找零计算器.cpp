#include<stdio.h>
#include<windows.h> 
int main()
{int price=0;
int mony=0;
int bill=0;
printf("请输入应收\n");
scanf("%d",&price);
printf("请输入面额\n");
scanf("%d",&mony);
bill=mony-price;
if(bill<0)
printf("该顾客钱不够\n");
else
printf("找零%d元",bill);
system("pause");
return 0;
} 
