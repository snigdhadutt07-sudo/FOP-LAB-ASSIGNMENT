//Assignment 22
/*Write a menu driven program in C to perform all string operations. (In built functions)*/
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], temp[100];
    int choice;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    do {
        printf("\n----- STRING MENU -----\n");
        printf("1. Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenation\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Length of str1 = %ld\n", strlen(str1));
                printf("Length of str2 = %ld\n", strlen(str2));
                break;
            case 2:
                strcpy(temp, str1);
                printf("Copied string = %s\n", temp);
                break;
            case 3:
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated string = %s\n", temp);
                break;
            case 4:
                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;
            case 5:
                printf("Reverse of str1: ");
                for(int i = strlen(str1) - 1; i >= 0; i--) {
                    printf("%c", str1[i]);
                }
                printf("\n");
                printf("Reverse of str2: ");
                for(int i = strlen(str2) - 1; i >= 0; i--) {
                    printf("%c", str2[i]);
                }
                printf("\n");
                break;
            case 6:
                printf("Program Ended\n");
                break;
            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 6);

    return 0;
}
