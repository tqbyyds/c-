#include<stdio.h>
/*��С������=�����������֮���������ǵ����Լ�����ؼ���������Լ����

�����Լ����շת�����������ŷ������㷨��*/
//ö�� 
int main()
{
    int a,b;
    int i=1;
    int min;
    int t;
    scanf("%d %d",&a,&b);
    if(a<b){
        min=a;
    }
    else{
        min=b;
    }
for(i=1;i<=min;i++){
	if(a%i==0&&b%i==0){
		t=i;
	}
}
    printf("���Լ����%d��С������%d",t,(a*b)/t);
    return 0;
}
/*շת����������Լ�� 
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a<b){
        c=a;
        a=b;
        b=c;
    }
    while(a%b!=0){
        int t;
        t=a%b;
        a=b;
        b=t;
    }
    printf("最大公约数为%d",b);
    return 0;
}*/ 
