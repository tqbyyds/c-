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
		printf("С��"); 
	}//�͵�ַ ->�ߵ�ַ С��   �ߵ�ַ->�͵�ַ ��� 
	else{
		printf("���"); 
	}

	return 0;
}
