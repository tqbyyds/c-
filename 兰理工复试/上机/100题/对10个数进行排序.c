#include<stdio.h>
void sort(int *a,int n){//n是数组元素的个数 
	int i=0;
	int j=0;
	for(i=0;i<n-1;i++){//冒泡由小到大 
		for(j=n-1;j>i;j--){
			if(a[j]<a[j-1]){
				int temp;
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
int main(){
	printf("请输入10个数字");
	int i;
	int a[10];
	for(i=0;i<10;i++){
		scanf("%d",&a[i]); 
	}
	sort(a,10);
		for(i=0;i<10;i++){
		printf("%d ",a[i]); 
	}
	return 0;
} 
