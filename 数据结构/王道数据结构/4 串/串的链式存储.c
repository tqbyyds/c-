#include<stdio.h>
typedef struct StringNode{
	char ch;//每个结点存1个字节 
	struct StringNode* next; 	
}StringNode,* String;
typedef struct StringNode{
	char ch[4];//每个结点存4个字节 
	struct StringNode* next; 	
}StringNode,* String;  
int main()
{

	return 0;
 }

