#include<stdio.h>
int fun(int a){
	if(a){
		return a*fun(a-1);
	}
	else return 1; 
}
int main(){
	int x;
	scanf("%d",&x);
	printf("%d",fun(x));
	return 0;
} 
