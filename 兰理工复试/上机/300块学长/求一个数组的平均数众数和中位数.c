#include <stdio.h>
int mean(int number[]);//��ƽ���� 
int median(int number[]);//����λ�� 
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
int mean(int number[])//��ƽ���� 
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
	for(i = 0;i<39;i++) //ð������
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
int median(int number[])//����λ�� 
{
	sort(number);
	return (number[20]+number[19])/2;
}
int mode(int number[])//������ 
{
	int b[10] = {1,1,1,1,1,1,1,1,1,1};//���ڴ��ÿ�����ݳ��ֵĴ�����
	int i = 0,j = 0;
	int Mode;//����
	sort(number);//����
	Mode = number[0];
	while(j<39)//�ҳ�������ͬ�ĸ�����������Ϊ����
	{
		if(number[j]==number[j+1])//���ʱ����+1��
		{
			b[i]++;//
		}
		else//�����ʱ��
		{
			if(b[i]>b[i-1]&&i>0)//�жϵ�ǰ�ĸ����Ƿ����һ��������ǣ��򽫴����ݼ�ΪMode��
			{
				Mode = number[j];
			}
			i++;//��ʼ��¼��һ�����ĸ���
		}
		j++;
	}
	return Mode;
}
/*����������һ�ַ�����
int mode(int number[])
{
  	int i;
  	int max = 0;
  	int Mode;
	int b[11] = {0};//b���±����number[]�е�Ԫ�أ�
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

