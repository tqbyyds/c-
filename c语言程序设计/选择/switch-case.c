#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{srand(time(0));
int a=rand();
switch(a%=10) {
case 1:
printf("��");
break;
case 2:
printf("ˮ����");
break;
case 3:
printf("�㽶");
break;
case 4:
printf("����");
break;
case 5:
printf("����");
break;
case 6:
printf("����");
break;
case 7:
printf("����");
break;
case 8:
printf("����");
break;
case 9:
printf("ӣ��");
break;
default:
printf("�Ը�ƨ");}
return 0;
}