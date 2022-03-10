#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100], str2[100],c;
	int i = 0, j = 0;
	printf("请输入原字符串：");
	scanf("%s", str1);
	getchar();
	printf("请输入要删除的字母：");
	scanf("%c", &c);
	for (i = 0; i < strlen(str1);i++)
	{
		if (str1[i] != c)
		{
			str2[j++] = str1[i];
		}
	}
	str2[j] = '\0';
	printf("\n删除后的字符串：%s\n", str2);
	return 0;
 
}
