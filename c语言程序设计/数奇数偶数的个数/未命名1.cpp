#include<stdio.h>
#include<windows.h> 
int main()
{int number;
int even=0;
int odd=0;
printf("����һ���� ����-1��������\n"); 
scanf("%d",&number);
while(number!=-1){if(number!=1)
{number%=2;
if(number==1){odd++;}else{even++;}}else{odd++;}
scanf("%d",&number);
}
printf("��������Ϊ%dż������Ϊ%d\n",odd,even);
system("pause");
return 0;
} 
