#include<stdio.h>
void upe(int i,int n);
void upee(int i);
void up(int i);
void dpe(int i);
void dpee(int i,int n);
void dp(int i,int n);
int main(void)
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++){
		upe(i,n);
		up(i);
		dpee(i,n);
		up(i);
		printf("\n");
	}
	for(i=1;i<=n;i++){
		dpe(i);
		dp(i,n);
		up(i);
		dp(i,n);
		printf("\n");
	}
	for(i=1;i<=n;i++){
		upe(i,n);
		upee(i);
		dp(i,n);
		printf("\n");
	}
	return 0;
}
void upe(int i,int n){
	int j;
	for(j=1;j<=n-i;j++){
			printf(" ");
		}
}
void upee(int i){
	int j;
	for(j=1;j<=2*i-1;j++){
		printf(" ");
	}
}
void up(int i){
	int j;
	for(j=1;j<=2*i-1;j++){
			printf("*");
		}
}
void dpe(int i){
	int j;
	for(j=2;j<=i;j++){
			printf(" ");
		}
}
void dpee(int i,int n){
	int j;
	for(j=1;j<=2*(n-i)+1;j++){
			printf(" ");
		}	
}
void dp(int i,int n){
	int j;
	for(j=1;j<=2*(n-i)+1;j++){
			printf("*");
		}
}
