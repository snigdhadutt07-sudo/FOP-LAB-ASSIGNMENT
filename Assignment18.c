//Assignment 18
/*Write a C program that accepts a string from user and perform following string operations- i.Calculate length of string ii. String reversal iii. Equality check of two strings iii. Check palindrome ii. Check substring*/
#include <stdio.h>
int stringLength(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i])
            return 0;
        i++;
    }
    return 1;
}
void stringReverse(char str[]) {
    int len = stringLength(str);
    int i;
    printf("Reversed string: ");
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}
void checkPalindrome(char str[]) {
    int len = stringLength(str);
    int i, flag = 1;
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Palindrome: Yes\n");
    else
        printf("Palindrome: No\n");
}
void checkSubstring(char str[], char sub[]) {
    int i, j, found;
    for(i = 0; str[i] != '\0'; i++) {
        found = 1;
        for(j = 0; sub[j] != '\0'; j++) {
            if(str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        if(found == 1) {
            printf("Substring found\n");
            return;
        }
    }
    printf("Substring not found\n");
}
int main() {
    char str[100], str2[100], sub[50];
    int choice;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("\n----- MENU -----\n");
    printf("1. String Length\n");
    printf("2. String Reverse\n");
    printf("3. String Equality\n");
    printf("4. Palindrome Check\n");
    printf("5. Substring Check\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Length = %d\n", stringLength(str));
            break;
        case 2:
            stringReverse(str);
            break;
        case 3:
            printf("Enter second string: ");
            scanf("%s", str2);
            if(stringCompare(str, str2))
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;
        case 4:
            checkPalindrome(str);
            break;
        case 5:
            printf("Enter substring: ");
            scanf("%s", sub);
            checkSubstring(str, sub);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
