#include<stdio.h>
int main(){
	int i,j,result;
	for(i=1;i<10;i++){
		for(j=1;j<=i;j++){
			result=i*j;
			printf("%d*%d=%-3d",i,j,result);// ���������ʽ��d��ʾ���������3��ʾ���������ռ3���ַ���λ�á�-�ű�ʾ���뷽ʽ��
			                                //������롣�����+�Ż��߲�д����ʾ�Ҷ��롣
		}
		printf("\n"); 
	}
	return 0;
} 
