#include <stdio.h>
int main()
{
    unsigned a,b,c,d;
    printf("������������\n");
    scanf("%o",&a);
    b=a>>4;
    c=~(~0<<4);
    d=b&c;
    printf("%o\n%o\n",a,d);
    return 0;
}
//������û�������ǰ���£����������͸���������һλ���൱�ڳ���2��1�η�������nλ���൱�ڳ���2��n�η�
