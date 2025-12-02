//write a program to find sum of elements in an array
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the number of elements in the array:");
	scanf("%d",&n);
	int array[n];
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{ 
	sum+=array[i];
	}
	printf("sum of all elements =%d\n",sum);
	return 0;
	
}
