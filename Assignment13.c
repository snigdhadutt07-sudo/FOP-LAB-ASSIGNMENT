//Assignment 13
/*To accept a number from user and print digits of number in a reverse order*/
#include <stdio.h>

int main() {
    int n, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Digits in reverse order: ");

    while(n != 0) {
        rem = n % 10;     // get last digit
        printf("%d ", rem);
        n = n / 10;       // remove last digit
    }

    printf("\n");
    return 0;
}

