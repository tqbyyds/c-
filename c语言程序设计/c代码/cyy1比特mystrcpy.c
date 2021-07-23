#include<stdio.h>
char *mystrcpy(char* dest,const char* sour)
{
    char*ret=dest;
    while(*dest++=*sour++){
        ;
    }//\0的ascii码为0
    return ret;
}
int main(void)
{
    char a[]="abcdefg";
    char b[]="spppss";
    printf("%s\n",mystrcpy(a,b));
    return 0;
    
}