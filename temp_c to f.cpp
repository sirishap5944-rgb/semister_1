//write c program for temp convert celsius into farenheit
#include<stdio.h>
int main()
{
	int temp,c,f;
	printf("enter temp value in celsius");
	scanf("%d",&c);
	f=c*9/5+32;
	printf("the temp in farenheit temp is %d",f);
	return 0;
	
	
}
