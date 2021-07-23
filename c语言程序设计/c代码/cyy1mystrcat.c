#include<stdio.h>
#include<string.h>
int mystrcat(char *s1,const char *s2){
char *s3=s1;
while(*s1!=0){
    s1++;
   }
while(*s2!=0){
    *s1=*s2;
    s1++;
    s2++;
   }
   *s1=0;
printf("%s",s1);
   return s3;
}
int main(void){
    char s1[200];
    char s2[100];
    char *s3=0;
    scanf("%s",s1);
    scanf("%s",s2);
    s3=mystrcat(s1,s2);
    printf("%s",s3);
    return 0;
}