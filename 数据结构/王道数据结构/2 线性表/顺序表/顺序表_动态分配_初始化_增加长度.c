#include<stdio.h>
#include<stdlib.h>  
#define InitSize 10//默认的最大长度 
typedef struct{
	int* data;//指示动态分配数组的指针 
	int MaxSize//顺序表的最大容量 
	int length;//顺序表当前的长度 
} Sqlist;//顺序表的类型定义(动态分配方式) 
void InitList(Sqlist* L){
	//用malloc函数申请一片连续的存储空间 
	L.data=(int *)malloc(InitSize*sizeof(int));
	L.length=0;
	L.MaxSize=InitSize;
}
void Increasize(Seqlist*,int len){
	int *p=L.data;
	int i=0;
	L.data=(int *)malloc((L.MaxSize+len)*sizeof(int));
	for(i=0;i<L.length;i++){
		L.data[i]=p[i];//将数据复制到新区域 
	}
	L.MaxSize=L.MaxSize+len;//顺序表最大长度增加len 
	free(p); //释放原来的内存空间 
}
int main()
{
	Sqlist L;//声明一个顺序表 
	InitList (&L)//初始化顺序表
	//。。。。往顺序表中随便插入几个元素。。。
	IncreaseSize(L,5); 
	return 0;
 }

