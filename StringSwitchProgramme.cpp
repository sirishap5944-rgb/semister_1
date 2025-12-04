#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int choice;

    printf("\nString Operations using Switch\n");
    printf("1. String copy\n");
    printf("2. Length of the string\n");
    printf("3. String reverse\n");
    printf("4. String concatenation\n");
    printf("5. String upper case\n");
    printf("6. String lower case\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice); 

    switch(choice) {

        case 1:
            printf("Enter a string: ");
            scanf("%s", s1);
            strcpy(s2, s1);
            printf("Copied string: %s\n", s2);
            break;

        case 2:
            printf("Enter a string: ");
            scanf("%s", s1);
            printf("Length of string: %lu\n", strlen(s1));
            break;

        case 3:
            printf("Enter a string: ");
            scanf("%s", s1);
            strrev(s1);  
            printf("Reversed string: %s\n", s1);
            break;

        case 4:
            printf("Enter first string: ");
            scanf("%s", s1);
            printf("Enter second string: ");
            scanf("%s", s2);
            strcat(s1, s2);
            printf("Concatenated string: %s\n", s1);
            break;

        case 5:
            printf("Enter a string: ");
            scanf("%s", s1);
            for(int i = 0; s1[i] != '\0'; i++) {
                if(s1[i] >= 'a' && s1[i] <= 'z')
                    s1[i] -= 32;
            }
            printf("Uppercase string: %s\n", s1);
            break;

        case 6:
            printf("Enter a string: ");
            scanf("%s", s1);
            for(int i = 0; s1[i] != '\0'; i++) {
                if(s1[i] >= 'A' && s1[i] <= 'Z')
                    s1[i] += 32;
            }
            printf("Lowercase string: %s\n", s1);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
