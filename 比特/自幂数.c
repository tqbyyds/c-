#include<stdio.h>
#include<math.h>
/*int main(void){
	int i;
	int ret0=0;
	int ret1=0;
	int ret2=0;
	int sum=0;
	int cnt=0;
	for(i=0;i<=10000;i++){
		ret0=i;
		ret1=i;
		while(ret0){
			cnt++;     //算位数 
			ret0/=10;
		}
		while(ret1){
			ret2=ret1%10;
			sum+=pow(ret2,cnt);  //各部分幂之和 
			ret1/=10;
		}
		if(sum==i){
			printf("%d\n",sum); //判断 
		}
		cnt=0;
		sum=0;    //初始化 
		ret2=0;
	}
	return 0;
}*/
int main(void)
{
	int i;
	for(i=0;i<10000;i++){
		int n=1;
		int tmp=0;
		tmp=i;
		int sum=0;
		while(tmp/=10){
			n++;
		}
		tmp=i;
		while(tmp){
			sum+=pow(tmp%10,n);
			tmp/=10;
		}
		if(sum==i)
		printf("%d\n",i);
	}
	return 0;
}
