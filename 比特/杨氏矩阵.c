#include<stdio.h>
#include<string.h>
int _search(int arr[3][3],int*x,int *y,int k){
	
	while(*x<3&&*y>=0){
		if(arr[*x][*y]<k){
			(*x)++;//����Ԫ�ض���kС 
		}
		else if(arr[*x][*y]>k){
			(*y)--;//����Ԫ�ض���k�� 
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
    	printf("�ҵ��˵�%d�е�%d��",x,y); 
    	
	}
	else{
		printf("û�ҵ�"); 
	}
	
		
	return 0;
}
//���Ͼ������������Һ��������¶��ǵ�����
//�������Ͻ�Ϊ�������Ԫ�غ͸�����СԪ�� 
// 
