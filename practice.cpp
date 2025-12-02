#include<stdio.h>
int main()
{
	int num,i,factor;
	printf("enter a number:");
	scanf("%d",&num);
    for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
	    	factor=factor++;
	    }
	    if(factor<2)
	    {
	    	printf("number is prime");
		}else{
			printf("number is not prime");
		}
		
         return 0;
		
		}	
}
