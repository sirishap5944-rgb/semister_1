#include<stdio.h>
int main()
{
	int n,i,a[10],min;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[i]>min)
		{
			min = a[i];
	    }
			printf("\nminimun element is:%d",min);
		}
			return 0;
    }
