#include<stdio.h>
void insert(int *a,int n,int x){
	int i,j;
	for(i=n-1;i>=0;i--){
		if(x<a[i]){
			a[i+1]=a[i];
		}
		else{
			a[i+1]=x;
			break;
		}
		
	} 
	
}
int main(){
	int a[10]={1,2,3,5,6,7,8,9,10};
	printf("请输入需要插入的数字\n");
	int x;
	scanf("%d",&x);
	insert(a,9,x);
	int i;
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
		}
	 
	return 0;
} 
