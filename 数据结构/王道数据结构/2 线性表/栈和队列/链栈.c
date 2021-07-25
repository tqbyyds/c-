#include<stdio.h>
typedef struct Linknode{
	int data;
	struct LinkNode *next;
} *LStack,LStNode;
LStack List_HeadInsert(LStack L){ 
	int x;
	LStNode *s;
	L=(LStNode *)malloc(sizeof(LStNode));
	L->next=NULL;
	scanf("%d",&x);
	while(x!=9999){
		s=(LStNode *)malloc(sizeof(LStNode));
		s->data=x;
		s->next=L->next;
		L->next=s; 
		scanf("%d",&x);
	}
	return L 
}
LStNode *GetElem(LStack L,int i){//按位查找 
		if(i<1)
			return false;
		LStNode *p;//指针指向当前扫描到的结点 
		int j=0;//当前p指向的是第几个结点 
		p=L;//L指向头节点，头节点是第0个节点（不存储数据） 
	while(p!=NULL&&j<i-1){//循环找到第i-1个结点 
		p=p->next;
		j++;
	}
	return p;
}
bool LStDelete(LStack L,int i,int *e){
		if(i<1)
			return false;
		LStNode *p=GetElem(L,i-1);//找到第i-1个结点	
	if(p=NULL)//i值不合法 
		return false;
	if(p->next==NULL)//第i-1个节点后已无其他节点 
		return false;
	LStNode *q=p->next;//令q指向被删除节点
	*e=q->data;//用e返回被删元素的值 
	p->next=q->next; //将*q节点从链中断开
	free(q);//释放节点存储空间 
	return true;//删除成功 
} 
int main()
{

	return 0;
 }

