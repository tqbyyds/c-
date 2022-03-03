#include<stdio.h>
/*×îĞ¡¹«±¶Êı=ÊäÈëµÄÁ½¸öÊıÖ®»ı³ıÓÚËüÃÇµÄ×î´ó¹«Ô¼Êı£¬¹Ø¼üÊÇÇó³ö×î´ó¹«Ô¼Êı£»

Çó×î´ó¹«Ô¼ÊıÓÃÕ·×ªÏà³ı·¨£¨ÓÖÃûÅ·¼¸ÀïµÂËã·¨£©*/
//Ã¶¾Ù 
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
    printf("×î´ó¹«Ô¼ÊıÊÇ%d×îĞ¡¹«±¶Êı%d",t,(a*b)/t);
    return 0;
}
/*Õ·×ªÏà³ı·¨Çó×î´ó¹«Ô¼Êı 
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
    printf("æœ€å¤§å…¬çº¦æ•°ä¸º%d",b);
    return 0;
}*/ 
