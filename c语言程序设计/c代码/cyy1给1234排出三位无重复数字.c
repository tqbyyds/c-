#include<stdio.h>
int main(void){
    int i,j,k;
    int cnt=0;
    for(i=1;i<10;i++){
        for(j=0;j<10;j++){
            for(k=0;k<10;k++){
                if(i!=j&&i!=k&&j!=k){
                    cnt++;
                    printf("%d\n",i*100+j*10+k);
                }
            }
        }
    }
    printf("有%d种",cnt);
  return 0;  
}