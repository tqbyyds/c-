#include<stdio.h>
void sort(int *a,int n){//n������Ԫ�صĸ��� 
	int i=0;
	int j=0;
	for(i=0;i<n-1;i++){//ð����С���� 
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
int fmax(int *b,int n){
	int max=b[0];
	int i=0; 
	int k=0;
	for(i=1;i<n;i++){
		if(max<b[i]){
			max=b[i];
			k=i;
		}
    }
    return k;
}
int main(){
	int a[11]={1,0,7,3,1,2,3,7,1,6,0};
	int b[11]={0,0,0,0,0,0,0,0,0,0,0};//��¼�ظ��ص��� 
	int c[11]={0,0,0,0,0,0,0,0,0,0,0};//��¼�ظ��ĸ��� 
	sort(a,11);
	int i=0;
	int j=0;
	int k=0;
		for(i=0;i<10;i++){
		if(a[i]==a[i+1]){
			b[j]++;
		}
		else {
			b[j]++;
			c[k++]=a[i];
			j++;
		}
	}
	if(a[i]!=a[i-1]){//����������⴦�� 
		c[k]=a[i];
		b[j++]++;
	}
	else{
		b[j]++;
		c[k]=a[i];
	}
	printf("������%d\n",c[fmax(b,11)]);
	printf("a");
	for(i=0;i<11;i++){
		printf("%d ",a[i]);
		if(i==10)
			printf("\n");
	} 
	printf("b");
	for(i=0;i<11;i++){
		printf("%d ",b[i]);
		if(i==10)
			printf("\n");
	} 
	printf("c");
	for(i=0;i<11;i++){
		printf("%d ",c[i]);
		if(i==10)
			printf("\n");
	} 
	return 0;  
} 
