#include<stdio.h>
int issxh(int n){
	int x,y,z;
	x=n/100;
	y=n%100/10;
	z=n%10;
	if(x*x*x+y*y*y+z*z*z==n)
		return 1;
	else
		return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	if(issxh(n))
		printf("��ˮ�ɻ�");
	else
	printf("����ˮ�ɻ�"); 
	return 0;
} 
