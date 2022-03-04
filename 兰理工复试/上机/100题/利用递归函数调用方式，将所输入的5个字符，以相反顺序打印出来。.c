#include<stdio.h>

void reverse(int n){
	char next;
	if(n<=1){
		next=getchar();
		putchar(next);
	}
	else{
		next=getchar();
		reverse(n-1);
		putchar(next);
	} 
}

int main()
{
	reverse(5);
	return 0;
}

