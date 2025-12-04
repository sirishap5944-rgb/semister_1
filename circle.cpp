#include<stdio.h>
int main()
{
	int radius;
	float pie=3.14;
	printf("enter the radius");
	scanf("%d",&radius);
	int area = pie*radius*radius;
    int	circumference =2*pie*radius;
	printf("enter a value of area and cirference");
	scanf("%d%d",&area,&circumference);
	return 0;
}
