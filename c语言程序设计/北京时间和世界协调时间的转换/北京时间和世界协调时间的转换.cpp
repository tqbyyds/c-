#include<stdio.h>
#include<windows.h>
int main()
{int bjt;
int utc=0;
printf("�����뱱��ʱ��"); 
scanf("%d",&bjt);
if(bjt%100>=60){printf("������ݲ����Ϲ淶\n");}
else if(bjt<800){utc=bjt+1600;printf("����Э��ʱ��Ϊ%d\n",utc);}
else if(bjt>2400){printf("�������ݲ����Ϲ淶");}
else {utc=bjt-800;printf("����Э��ʱ��Ϊ%d\n",utc);
}
system("pause");
return 0;
} 
