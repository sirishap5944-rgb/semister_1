#include<stdio.h>
#include<string.h>
int main()
{
   char s1[100],s2[100];
   int choice;
   
   printf("\nstring operations using switch\n");
   printf("1.string length\n");
   printf("\n 2.string copy");
   printf("\n 3.string compare"); 
   printf("\n 4.string reverse");
   printf("\n 5.string concatenation");
   printf("\n 6.string lower case");
   printf("\n 7. string upper case");
   printf("enter a choice:");
   scanf("%d",&choice);
   
   switch(choice)
   {
   	case 1:
   		    
		   
   		printf("enter the string");
   		scanf("%[^\n]",s1);
   		printf("length of the string:%d",strlen(s1));
   	    0	break;
        }
     case 2:
   	{
   		printf("enter the  string ");
   		scanf("%[^\n]",s1);
   		printf("copy for the string:%s",strcpy(s1,s2));
   		printf("copied string is %s",s2);
   		break;
	}
    
	    return 0;
}

