#include<stdio.h>
#include<string.h>
int _search(int arr[3][3],int*x,int *y,int k){
	
	while(*x<3&&*y>=0){
		if(arr[*x][*y]<k){
			(*x)++;//该行元素都比k小 
		}
		else if(arr[*x][*y]>k){
			(*y)--;//该列元素都比k大 
		}
		else{
			return 1;
		}
	}
	return 0;
}
int main(void){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int k=6;
	int x=0;
	int y=2;
    int ret=_search(arr,&x,&y,k);
    if(ret==1){
    	printf("找到了第%d行第%d列",x,y); 
    	
	}
	else{
		printf("没找到"); 
	}
	
		
	return 0;
}
//杨氏矩阵是自左向右和自上向下都是递增的
//矩阵右上角为该行最大元素和该列最小元素 
// 
