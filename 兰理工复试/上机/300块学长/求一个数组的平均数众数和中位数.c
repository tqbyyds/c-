#include <stdio.h>
int mean(int number[]);//求平均数 
int median(int number[]);//求中位数 
void sort(int number[]);
int mode(int number[]);
int main()
{
	int i;
	int number[40];
	printf("Input the feedbacks of 40 students:\n");
	for(i = 0;i<40;i++)
	{
		scanf("%d",&number[i]);
	}
	printf("Mean value=%d\n",mean(number));
	printf("Median value=%d\n",median(number));
	printf("Mode value=%d\n",mode(number));
	return 0;
}
int mean(int number[])//求平均数 
{
	int i;
	int sum = 0,avg;
	for(i = 0;i<40;i++)
	{
		sum+=number[i];
	}
	avg = sum/40;
	return avg;
}
void sort(int number[])
{
	int i,j;
	int t;
	for(i = 0;i<39;i++) //冒泡排序
	{
		for(j = 0;j<39-i;j++)
		{
			if(number[j]>number[j+1])
			{
				t = number[j];
				number[j] = number[j+1];
				number[j+1] = t;
			}
		}
	}
	printf("\n");
}
int median(int number[])//求中位数 
{
	sort(number);
	return (number[20]+number[19])/2;
}
int mode(int number[])//求众数 
{
	int b[10] = {1,1,1,1,1,1,1,1,1,1};//用于存放每个数据出现的次数；
	int i = 0,j = 0;
	int Mode;//众数
	sort(number);//排序
	Mode = number[0];
	while(j<39)//找出连续相同的个数最多的数即为众数
	{
		if(number[j]==number[j+1])//相等时个数+1；
		{
			b[i]++;//
		}
		else//不相等时，
		{
			if(b[i]>b[i-1]&&i>0)//判断当前的个数是否比上一个大，如果是，则将此数暂记为Mode；
			{
				Mode = number[j];
			}
			i++;//开始记录下一个数的个数
		}
		j++;
	}
	return Mode;
}
/*找众数的另一种方法：
int mode(int number[])
{
  	int i;
  	int max = 0;
  	int Mode;
	int b[11] = {0};//b的下标就是number[]中的元素；
	for(i = 0;i<40;i++)
	{
		b[number[i]]++;
	}
	for(i = 1;i<=10;i++)
	{
		if(b[i]>max)
		{
			max = b[i];
			Mode = i;
		}
	}
	return Mode;
}

