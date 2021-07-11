#include<stdio.h>
void* my_memcpy(void* dest,const void* source,size_t num)
{
	void* ret=dest;
	while(num--){
	*(char*)dest=*(char*)source;
	dest=(char*)dest+1;
	source=(char*)source+1;
	}
	return ret;
}
int main(void)
{
	int arr1[]={1,2,3,4,5,6,7,8};
	int arr2[8]={0};
	my_memcpy(arr2,arr1,sizeof(arr1));
	int i=0;
	for(i=0;i<sizeof(arr1)/sizeof(arr1[0]);i++){
		printf("%d ",arr1[i]);
	}
	return 0;
 } 
