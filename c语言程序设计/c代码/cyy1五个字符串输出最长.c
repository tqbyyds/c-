#include <stdio.h>
#include<string.h>
int main(void)
{    int i;
     char t[20];
	    char a[5][20];
     //char *p[5];
    for(i=0;i<5;i++){
        scanf("%s",a[i]);
       // p[i]=a[i];
    }
    int j;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(strlen(a[j])>strlen(a[i])){
                strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }
    }
    printf("%s",a[0]);
    
    

	return 0;
}

    