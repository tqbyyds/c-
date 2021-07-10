#include<stdio.h>
#include<windows.h> 
int main()
{int number;
int even=0;
int odd=0;
printf("输入一组数 输入-1结束输入\n"); 
scanf("%d",&number);
while(number!=-1){if(number!=1)
{number%=2;
if(number==1){odd++;}else{even++;}}else{odd++;}
scanf("%d",&number);
}
printf("奇数个数为%d偶数个数为%d\n",odd,even);
system("pause");
return 0;
} 
