#include<stdio.h>
#include<string.h>
struct stu
{
    int age;
    char name[30];
};
void swap(char*el1,char*el2,int width){
     int i=0;
     char s=0;
    for(i=0;i<width;i++){
        s=*el1;
        *el1=*el2;
        *el2=s;
        el1++;
        el2++;
    }
}
int cmp(void*el1,void*el2){//不同比较对象cmp函数不同
   return strcmp(((struct stu*)el1)->name,((struct stu*)el2)->name);
    //return ((struct stu*)el1)->age-((struct stu*)el2)->age;
}
void bubble_sort(void *base,int sz,int width ,int (*cmp)(void*el1,void*el2))
{//形参为 被比较对象地址 个数 宽度
    int i,j;
    for(i=0;i<sz-1;i++){
        for(j=0;j<sz-1-i;j++){
            if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0){
                swap((char*)base+j*width,(char*)base+(j+1)*width,width);
            }//强制转换成char逐字节比较和交换
        }
    }
}
int main(void){
    struct stu s[3]={{19,"wangwu"},{18,"liliu"},{20,"zhanghao"}};
    bubble_sort(s,sizeof(s)/sizeof(s[0]),sizeof(s[0]),cmp);
    int i=0;
    for(i=0;i<sizeof(s)/sizeof(s[0]);i++){
        printf("%d,%s\n",s[i].age,s[i].name);
    }
    return 0;
}