#include<stdio.h>
#include<string.h>   
int main()
{
	char name[10],full_name[10],address[30];
		printf("enter your name");
	scanf("%s",name);
	printf("%s",name);
	
	getchar();
	printf("enter full name:");
	scanf(" %[^\n]",full_name);
	scanf("\n%s",full_name);
	return 0;
}
