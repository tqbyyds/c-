#include<stdio.h>
void reverse(int *arr,int a,int b){
	int i=a;
	int j=b;
	int temp;
	while(i<j){
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			i++;
			j--;	
	}
}
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	reverse(arr,0,9);
	int i;
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	return 0;
} 
