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
scanf("%d",&b);
if(a==b){count=1;
printf("������һ�ξͲ¶���\n");}
else{while(a!=b){count++;
if(b>a){printf("����������\n");}
else{printf("������С��\n");}
scanf("%d",&b);}
printf("������%d�β¶���",count);}
    return 0;
}