#include<stdio.h>
int main(void){
    int i,j,k;
    for(i=1;i<10;i++){
        for(j=0;j<10;j++){
            for(k=0;k<10;k++){
                if(k*k*k+j*j*j+i*i*i==k+j*10+i*100)
                    printf("%d\n",k+j*10+i*100);
            }
        }
    }
  return 0;  
}