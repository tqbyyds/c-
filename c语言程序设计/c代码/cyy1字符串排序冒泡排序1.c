#include <stdio.h>
#include<string.h>
int main()
{
int k;
	char a[5][20], *p[5], t[20];
	int i, j;
	puts("输入五个字符串");
	for (i = 0; i < 5; i++) {
		scanf("%s", a[i]);
		p[i] = a[i];
	}
int sz=sizeof(a)/sizeof(a[0]);
	for (i = 0; i<sz-1; i++) {
		for (j = 0; j <sz-1-i; j++) {
			if (strcmp(p[j],p[j+1])<0) {
				strcpy(t, p[j]);
				strcpy(p[j], p[j+1]);
				strcpy(p[j+1], t);
			}
		}
	}
	puts("从大到小顺序为");
	for (i = 0; i < 5; i++)
		printf("%s\n", p[i]);
	return 0;
}

    