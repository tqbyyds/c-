#include <stdio.h>
 
int main( )
{
    long a,b,c,d,e,x;
    printf("������ 5 λ���֣�");
    scanf("%ld",&x);
    a=x/10000;        /*�ֽ����λ*/
    b=x%10000/1000;   /*�ֽ��ǧλ*/
    c=x%1000/100;     /*�ֽ����λ*/
    d=x%100/10;       /*�ֽ��ʮλ*/
    e=x%10;           /*�ֽ����λ*/
    if (a!=0){
        printf("Ϊ 5 λ��,����Ϊ�� %ld %ld %ld %ld %ld\n",e,d,c,b,a);
    } else if(b!=0) {
         printf("Ϊ 4 λ��,����Ϊ�� %ld %ld %ld %ld\n",e,d,c,b);
    } else if(c!=0) {
         printf("Ϊ 3 λ��,����Ϊ��%ld %ld %ld\n",e,d,c);
    } else if(d!=0) {
         printf("Ϊ 2 λ��,����Ϊ�� %ld %ld\n",e,d);
    } else if(e!=0) {
         printf("Ϊ 1 λ��,����Ϊ��%ld\n",e);
    }
}
