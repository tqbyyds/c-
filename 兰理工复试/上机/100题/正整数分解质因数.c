#include<stdio.h>
int main(){
	int i=0;
	int n=0;
	int count=0;
	printf("������һ������");
	scanf("%d",&n);
    while(n){
    	for(i=2;i<=n;i++){
    		if(n%i==0){
    			count++;
    			if(count==1)
					printf("%d",i);
				else
					printf("*%d",i);
				break;	
			}
		}
		n/=i;
	}
	return 0;
} 
//�� 
/*int main()
{
    int n,i;
    printf("������������");
    scanf("%d",&n);
    printf("%d=",n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d",i);
            n/=i;
            if(n!=1) printf("*");
        }
    }
    
    printf("\n");
    return 0;
}*/
