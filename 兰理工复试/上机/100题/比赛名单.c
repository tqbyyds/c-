#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char i,j,k;
    for(i='x';i<='z';i++) {
        for(j='x';j<='z';j++) {
                for(k='x';k<='z';k++) {
                    if(i!=j&&i!=k&&j!=k) {
                        if(i!='x'&&k!='x'&&k!='z') {
                            printf("Ë³ÐòÎª£ºa--%c\tb--%c\tc--%c\n",i,j,k);
                        }
                    }
                }
            
        }
    }
    return 0; 
}
