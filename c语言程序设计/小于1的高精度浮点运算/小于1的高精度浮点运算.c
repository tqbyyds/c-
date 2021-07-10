#include<stdio.h>
int main(void){
	int a;
	int b;
	int c;
	int cnt=0;
	printf("请输入一个小于1的分数\n");
	scanf("%d/%d",&a,&b);
do{
	a*=10;
	c=a/b;
	a=a%b;
	cnt++;
	if(cnt==1){
		printf("0.%d",c);
	}
	else{
		printf("%d",c);
	}
	if(cnt==200){
		break;
	}
}
while(a!=0);
 return 0;
	
}
