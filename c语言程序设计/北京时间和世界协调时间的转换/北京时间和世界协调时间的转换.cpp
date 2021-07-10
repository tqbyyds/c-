#include<stdio.h>
#include<windows.h>
int main()
{int bjt;
int utc=0;
printf("请输入北京时间"); 
scanf("%d",&bjt);
if(bjt%100>=60){printf("你的数据不符合规范\n");}
else if(bjt<800){utc=bjt+1600;printf("世界协调时间为%d\n",utc);}
else if(bjt>2400){printf("您的数据不符合规范");}
else {utc=bjt-800;printf("世界协调时间为%d\n",utc);
}
system("pause");
return 0;
} 
