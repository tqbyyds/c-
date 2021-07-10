#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{srand(time(0));
int a=rand();
switch(a%=10) {
case 1:
printf("Àæ");
break;
case 2:
printf("Ë®ÃÛÌÒ");
break;
case 3:
printf("Ïã½¶");
break;
case 4:
printf("Î÷¹Ï");
break;
case 5:
printf("²¤ÂÜ");
break;
case 6:
printf("ÑîÌÒ");
break;
case 7:
printf("ÁñÁ«");
break;
case 8:
printf("éÙ×Ó");
break;
case 9:
printf("Ó£ÌÒ");
break;
default:
printf("³Ô¸öÆ¨");}
return 0;
}