#include<stdio.h>
#define MaxSize 50//定义线性表的最大长度 
typedef struct{
	int data [MaxSize];//顺序表的元素  
	int length;//顺序表当前的长度 
} Sqlist;//顺序表的类型定义
void del_x_2(Sqlist *L,int x){
	int k=0;int i=0;
	while(i<L->length){//k记录值等于x的元素的个数 
		if(L->data[i]==x)
			k++;
		else
			L->data[i-k]=L->data[i];//当前元素前移k个位置 
		i++;
	}
	L->length=L->length-k;//顺序表的长度递减 
} 
int main()
{
    Sqlist L;
	L.data[0]=3;
	L.data[1]=6;
	L.data[2]=0;
	L.data[3]=7;
	L.data[4]=6;
	L.length=5;
	del_x_2(&L,6);
	int i=0;
	for(i=0;i<=L.length-1;i++){
		printf("%d\n",L.data[i]);
	}
	return 0;
 }

