#include<stdio.h>
int main()
{
	char name[10];
	char roll_number[20];
	float marks;
	printf("enter your name");
	scanf("%s",&name);
	printf("enter your roll_number");
	scanf("%s",&roll_number);
	printf("enter your marks");
	scanf("%f",&marks);
	printf(" your name is:%s\n",name);
	printf("your roll_number is:%s\n",roll_number);
	printf("your marks is:%4f\n",marks);
	return 0;
}
