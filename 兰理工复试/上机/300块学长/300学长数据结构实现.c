#include<stdio.h>


typedef int ElemType;
typedef struct Sqlist{
	
	ElemType *elem;
	ElemType listsize;
	ElemType length;	
};//创建一个数字列表的结构体 


//输入数据
 void InputData(Sqlist &La)
 {
 	ElemType data;
 	//i 第一个作用，让数据进入数组，按序存储，更新数组的长度. 
 	for(int i=0;;i++)
 	{
 		scanf("%d",&data);
 		if(data!=9999)
 		{
 			La.elem[i]=data;
 			La.length++;
		 }
 		else
 		 break; 		
	 }
  }
 
void OutputData(Sqlist La)
{
	for(int i=0;i<La.length;i++)
	{
		printf("%d ",La.elem[i]);
	}
	printf("打印结束！\n");	
 } 
 
//合并链表   如果子函数中修改，一定加&号 
void MergeList(Sqlist La,Sqlist Lb,Sqlist &Lc)
{
	int i,j,k;
	i=j=k=0;
	//Lc进行初始化，让其具有储存LaLb的容量 
	Lc.length=La.length+Lb.length;
	Lc.listsize=La.listsize+Lb.listsize;
	Lc.elem=new ElemType[Lc.listsize]; 
	
	while(i<=La.length-1&&j<=Lb.length-1)
	{
		ElemType pa=La.elem[i];//pa获取La元素 
		ElemType pb= Lb.elem[j];//pb获取Lb元素
		
		if(pa<=pb)
		{
			Lc.elem[k]=pa;
			i++;//La后移动 
			k++;	
		}		
		else
		{
			Lc.elem[k]=pb;
			j++;//Lb后移动 
			k++;		
		 } 	
	 } 
	 
	 //处理La的剩余数据
	 while(i<=La.length-1)
	 {
	 	ElemType pa =La.elem[i];//pa获取La元素 
	 	Lc.elem[k]=pa;
	 	k++;
	 	i++; 	
	 }
	 
	 
	 //处理Lb的剩余数据 
	while(j<=Lb.length-1)
	 {
	 	ElemType pb =Lb.elem[j];//pa获取La元素 
	 	Lc.elem[k]=pb;
	 	k++;
	 	j++; 	
	 }
	
	
}
int FindData(Sqlist La,ElemType n){
 	
 	for(int i=0;i<La.length;i++)
 	{
	 
	 	if(La.elem[i]==n) return i;
	 } 
 	
 	
 	return -1;
 } 
 
int main()
{
	
	//顺序表，要求你创建一个动态顺序表，实现输入输出，合并链表
	//输入的数据不限制，用9999表示这个数据获取结束。
	 
	Sqlist La,Lb,Lc;//声明三个表，LaLb分别保存两组数组，Lc保存合并后的数据 
	
	//初始化La表 
	La.elem=new ElemType[100];
	La.length=0;
	La.listsize=100;
	//初始化Lb表 
	Lb.elem=new ElemType[100];
	Lb.length=0;
	Lb.listsize=100;
	
	printf("创建La表，请按照顺序输入，以9999结束\n"); 
	InputData(La);
	 
//	printf("创建Lb表，请按照顺序输入，以9999结束\n"); 
//	InputData(Lb);
//	 OutputData(La);
//	 OutputData(Lb);
//	MergeList(La,Lb,Lc);
//	
//	for(int i=0;i<Lc.length;i++)
//	{
//		printf("%d ",Lc.elem[i]);
//	}
//	OutputData(Lc);

	//写一个子函数，查找某一元素，成功返回下标，失败返回-1。
//	 
	int result =FindData(La,3);
	if(result==-1) printf("未找到！-1");
	else 
	printf("当前下标为:%d",result); 
	return 0;
	//1.完成数据结构基础知识点汇总。
	//2.课上代码一定掌握 
	//3.实现这里边的删除，修改功能（基于下标） 
	
 } 
