#include<stdio.h>
int fun1(int  m){
	 int i;
	 int re=1;
	 for(i=1;i<=m;i++){
	 	re=re*i;
	 }
	 return re;
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	float result=fun1(m)/fun1(n)*fun1(m-n);
	printf("%f",result);
	return 0;
} 
