#include<stdio.h>
#include<windows.h>
int search(int key,int a[],int length);
int main(void){
	int a[]={1,2,3,125,521,520,13,14,1314,};
	int x;
	int log;
	printf("请输入一个数\n");
	scanf("%d",&x);
	log=search(x,a,sizeof(a)/sizeof(a[0]));
	if(log!=-1){
		log++;
		printf("%d在第%d位上",x,log) ;
	}
	else{
		printf("不存在"); 
	}
	system("pause");
	return 0;
	
}
int search(int key,int a[],int length)
{
	int ret=-1;
	int i;
	for(i=0;i<length;i++){
		if(a[i]==key){
			ret=i;
			break;
		}
	}
	return ret;
}

