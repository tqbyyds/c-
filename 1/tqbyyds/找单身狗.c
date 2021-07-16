#include<stdio.h>
int main()
{
	int i=0;
	int ret=0;
	int po=0;
	int gro1=0;
	int gro2=0;
	int dog[10]={1,2,3,4,5,1,2,3,4,6};
	for(i=0;i<10;i++){
		ret^=dog[i];//将整个数组的数字 异或 取和，结果就是数组中两个只出现一次的数 异或 的结果
	 }
	for(po=1;po<=32;po++){
	 	if((ret>>1)&1)//我们寻找从低位到高位首次出现 1 的位置。
	 	break;
	}
	for(i=0;i<10;i++){
		if((dog[i]>>po)&1){
			gro1^=dog[i];
		}
		else{//将dog[i]的po位是1还是0分为两组，分别进行异或求和运算
			gro2^=dog[i];
		}
	}//将dog[i]的po位为1的一组异或求和结果存放在gro[1]中；为 0的一组异或求和结果存放在 gro[0]中。这样就可以将两个只出现一次的数字分开。gro[0] gro[1] 即是只出现一次的两个数 
	printf("%d %d",gro1,gro2);
	return 0;
 }

