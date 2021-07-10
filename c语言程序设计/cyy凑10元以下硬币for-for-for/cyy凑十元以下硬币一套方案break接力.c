#include<stdio.h>

int main()
{int x;
int one,two,five;
int exit=0;
    scanf("%d",&x);
    for(one=1;one<x*10;one++){
        for(two=1;two<x*5;two++){
            for(five=1;five<x*2;five++){
                if(one+two*2+five*5==x*10){
                    printf("%d个一角%d个两角%d个五角\n",one,two,five);
                    exit=1;break;  
                 }
             }
             if(exit)break;
         }
         if(exit)break;
     }
    return 0;
}