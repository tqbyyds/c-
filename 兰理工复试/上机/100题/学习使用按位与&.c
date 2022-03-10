#include <stdio.h>
int main()
{
    int a,b;
    a=077;//077是8进制数63； 
    b=a&3;
    printf("a & b(decimal) 为 %d \n",b);
    b&=7;
    printf("a & b(decimal) 为 %d \n",b);
    return 0;
}
/*0&0=0; 0&1=0; 1&0=0; 1&1=1
*/
