#include<stdio.h>
#define M  3
//ת�þ���  
void transpose(int a[M][M]){
	int i,j,temp;
	for(i=0;i<M;i++){
		for(j=i;j<M;j++){
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
}
int main(){
	 int a[M][M]={{1,2,3},{4,5,6},{7,8,9}};
 int i,j;
 printf("ת��ǰ��\n");
 //����������� 
 for(i=0;i<M;i++)
 {	
 	for(j=0;j<M;j++)
		printf("%d ",a[i][j]);
	printf("\n");
 }
 printf("ת�ú�\n");
 transpose(a);
 //���ת�ú�ľ��� 
  for(i=0;i<M;i++)
 {	
 	for(j=0;j<M;j++)
		printf("%d ",a[i][j]);
	printf("\n");
 } 
	printf("end!\n");
	return 0;
} 
