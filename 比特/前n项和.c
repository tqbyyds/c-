#include<stdio.h>
/*×Ô¼ºÐ´µÄ£ºint main(void){
	int i=0;
	int j=0;
	int n=0;
	int x=0;
	int sum=0;
	int ret=0;
	scanf("%d%d",&x,&n);
	ret=x;
	for(i=0;i<n;i++){
		for(j=1;j<=i;j++){
			x*=10;
			x+=ret;
		}
		sum+=x;	
		printf("%d\n",x);
		x=ret;
	}
	printf("%d",sum);
	
	
	return 0;
}*/
int main(void){
	int i=0;
	int a=0;
	int n=0;
	int ret=0;
	int sum=0;
	scanf("%d%d",&a,&n);
	for(i=0;i<n;i++){
		ret=ret*10+a;
		sum+=ret;
		printf("%d\n",ret); 
	}
	printf("%d",sum);
	return 0;
}

