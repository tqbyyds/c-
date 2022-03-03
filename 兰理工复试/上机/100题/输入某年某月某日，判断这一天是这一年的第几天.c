#include<stdio.h>
int TheDays(int year,int month,int day){
	int num=0;
	switch(month){
		case 1:{
			num=0;
			break;
		}
		case 2:{
			num=31;
			break;
		}
		case 3:{
			num=31+28;
			break;
		}
		case 4:{
			num=31+28+31;
			break;
		}
		case 5:{
			num=31+28+31+30;
			break;
		}
		case 6:{
			num=31+28+31+30+31;
			break;
		}
		case 7:{
			num=31+28+31+30+31+30;
			break;
		}
		case 8:{
			num=31+28+31+30+31+30+31;
			break;
		}
		case 9:{
			num=31+28+31+30+31+30+31+31;
			break;
		}
		case 10:{
			num=31+28+31+30+31+30+31+31+30;
			break;
		}
		case 11:{
			num=31+28+31+30+31+30+31+31+30+31;
			break;
		}
		case 12:{
			num=31+28+31+30+31+30+31+31+30+31+30;
			break;
		}
	}
	return num;
}
int main(){
	int year;int month;int day;int a;int leap;
	scanf("%d,%d,%d",&year,&month,&day);
    if(year%400==0||year%4==0&&year%100!=0){
    	leap=1;
	}
	else{
		leap=0;
	}
	if(month>2){
		a=TheDays(year,month,day)+day+leap;
	}
	else{
		a=TheDays(year,month,day)+day;
	}
	printf("%d",a);
	return 0;
} 
