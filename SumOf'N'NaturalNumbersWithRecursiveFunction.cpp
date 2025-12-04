// sum of n natural numbers with recursive
#include<stdio.h>
int sum(int n)
{
	if (n==0)      //base call
	return 0;
	else 
	return n + sum(n-1);   // recursive call
}
int main()
{
int n;
printf(" enter a number:");
scanf("%d",&n);
printf("sum: %d",sum(n));
return 0;
}
