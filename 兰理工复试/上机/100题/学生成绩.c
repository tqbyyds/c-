#include<stdio.h>
int main(){
	printf("������ѧ������");
	int score=0;
	scanf("%d",&score);
	if(score>=90){
		printf("A"); 
	}
	else if(60<=score&&score<=89) {
		printf("B");
	}
	else if(score<60){
		printf("C");
	}
	return 0;
}
/*int main()
{
    int score;
    char grade;
    printf("����������� ");
    scanf("%d",&score);
    grade=(score>=90)?'A':((score>=60)?'B':'C');
    printf("%c\n",grade);
    return 0;
} */
