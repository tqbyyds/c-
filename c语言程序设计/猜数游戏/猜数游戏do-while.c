#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{srand(time(0));
int a=rand();
int b;
int count=0;
printf("���Ѿ����һ������\n");
a%=100;
printf("������һ��1��100����\n");
do{scanf("%d",&b);
 count++;
 if(b>a){printf("����������\n");}
else if(b<a){printf("������С��\n");}
}while(a!=b);
printf("������%d�β¶���",count);
return 0;
}