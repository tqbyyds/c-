#include<stdio.h>
#include<stdlib.h>  
#define InitSize 10//Ĭ�ϵ���󳤶� 
typedef struct{
	int* data;//ָʾ��̬���������ָ�� 
	int MaxSize//˳����������� 
	int length;//˳���ǰ�ĳ��� 
} Sqlist;//˳�������Ͷ���(��̬���䷽ʽ) 
void InitList(Sqlist* L){
	//��malloc��������һƬ�����Ĵ洢�ռ� 
	L.data=(int *)malloc(InitSize*sizeof(int));
	L.length=0;
	L.MaxSize=InitSize;
}
void Increasize(Seqlist*,int len){
	int *p=L.data;
	int i=0;
	L.data=(int *)malloc((L.MaxSize+len)*sizeof(int));
	for(i=0;i<L.length;i++){
		L.data[i]=p[i];//�����ݸ��Ƶ������� 
	}
	L.MaxSize=L.MaxSize+len;//˳�����󳤶�����len 
	free(p); //�ͷ�ԭ�����ڴ�ռ� 
}
int main()
{
	Sqlist L;//����һ��˳��� 
	InitList (&L)//��ʼ��˳���
	//����������˳����������뼸��Ԫ�ء����������� 
	IncreaseSize(L,5); 
	return 0;
 }

