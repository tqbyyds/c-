#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{srand(time(0));
int a=rand();
switch(a%=10) {
case 1:
printf("梨");
break;
case 2:
printf("水蜜桃");
break;
case 3:
printf("香蕉");
break;
case 4:
printf("西瓜");
break;
case 5:
printf("菠萝");
break;
case 6:
printf("杨桃");
break;
case 7:
printf("榴莲");
break;
case 8:
printf("橘子");
break;
case 9:
printf("樱桃");
break;
default:
printf("吃个屁");}
return 0;
}