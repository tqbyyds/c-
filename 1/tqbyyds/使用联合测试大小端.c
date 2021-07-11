#include<stdio.h>
int check_sys(void)
{
union un{
		int a;
		char c;	
	}u;
	u.a=1;
	return u.a;
}
int main(void)
{
	if(check_sys()){
		printf("小端"); 
	}//低地址 ->高地址 小端   高地址->低地址 大端 
	else{
		printf("大端"); 
	}

	return 0;
}
