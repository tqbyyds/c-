#include<stdio.h>
#include<windows.h> 
int main()
{int price=0;
int mony=0;
int bill=0;
printf("������Ӧ��\n");
scanf("%d",&price);
printf("���������\n");
scanf("%d",&mony);
bill=mony-price;
if(bill<0)
printf("�ù˿�Ǯ����\n");
else
printf("����%dԪ",bill);
system("pause");
return 0;
} 
