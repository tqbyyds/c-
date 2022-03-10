#include<stdio.h>
void sort(int arr[10],int a,int b){
    int i,j;
    i=a;
    j=b;
    int temp=arr[j];
    while(i<j){while(i<j&&arr[i]%2==1)i++;arr[j]=arr[i];
				while(i<j&&arr[j]%2==0)j--;arr[i]=arr[j]; 
    }
    arr[i]=temp;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    sort(arr,0,9);
    int i;
    for(i=0;i<10;i++){
    	printf("%d ",arr[i]);
	}
    return 0;

}
