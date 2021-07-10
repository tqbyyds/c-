#include<stdio.h>
int k(double a,double b,double *reseult);
int main(void){
	double a,b,c;
	scanf("%lf %lf",&a,&b);
	if(k(a,b,&c)){
		printf("%f/%f=%f",a,b,c);
	}
	return 0;
}
int k(double a,double b,double *reseult){
	int ret=1;
	if(b==0){
		ret=0;
	}
	else{
		*reseult=a/b;
	}
	return ret;
}
