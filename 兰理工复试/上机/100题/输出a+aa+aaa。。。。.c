#include<stdio.h>
int main(){
	int s=0;
	int a=0;
	int n=0;
	int i=0;
	int j=0;
	int k=0;
	
	int t=0;
	printf("请输入a和n\n");
	scanf("%d %d",&a,&n);
	t=a;
	for(i=1;i<=n;i++){
		if(i==1)
			s+=t;
		else{
				a=t;
				for(j=i-1;j>0;j--){
					a=a*10+t;
				//	printf("%d ",a); 
				}
				s+=a;	
	    }
	}
	printf("%d",s);
	return 0;
}
//答案
/*
int main()
{
    int s=0,a,n,t;
    printf("请输入 a 和 n：\n");
    scanf("%d%d",&a,&n);
    t=a;
    while(n>0)
    {
        s+=t;
        a=a*10;
        t+=a;
        n--;
    }
    printf("a+aa+...=%d\n",s);
    return 0;
} */ 
