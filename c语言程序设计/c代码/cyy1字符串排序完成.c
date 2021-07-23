#include <stdio.h>
#include<string.h>
int main()
{
	char a[5][20], *p[5], t[20];
	int i, j;
	puts("输入五个字符串");
	for (i = 0; i < 5; i++) {
		scanf("%s", a[i]);
		p[i] = a[i];
	}
	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (strcmp(p[j],p[i])>0) {
				strcpy(t, p[i]);
				strcpy(p[i], p[j]);
				strcpy(p[j], t);
			}
		}
	}
	puts("从大到小顺序为");
	for (i = 0; i < 5; i++)
		printf("%s\n", p[i]);
	return 0;
}

