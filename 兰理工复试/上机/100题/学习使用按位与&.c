#include <stdio.h>
int main()
{
    int a,b;
    a=077;//077��8������63�� 
    b=a&3;
    printf("a & b(decimal) Ϊ %d \n",b);
    b&=7;
    printf("a & b(decimal) Ϊ %d \n",b);
    return 0;
}
/*0&0=0; 0&1=0; 1&0=0; 1&1=1
*/
