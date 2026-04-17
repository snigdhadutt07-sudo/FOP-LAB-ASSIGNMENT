//Assignment 14
/*To input binary number from user and convert it into decimal number.*/
#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, rem, base=1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while(binary != 0) {
        rem = binary % 10;                  
        decimal = decimal + rem * base;
        base=base*2;
        binary = binary / 10;               
    }

    printf("Decimal number = %d\n", decimal);

    return 0;
}
