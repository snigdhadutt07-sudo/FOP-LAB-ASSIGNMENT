//Assignment9
/*To check whether the input number is Armstrong number or not. An Armstrong number is an
integer with three digits such that the sum of the cubes of its digits is equal to the number itself.Ex. 371*/
#include <stdio.h>
int main() {
    int num, original, remainder;
    int sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        remainder = num % 10;          // get last digit
        sum = sum + remainder * remainder * remainder; // cube of digit
        num = num / 10;               // remove last digit
    }

    if(sum == original)
        printf("It is an Armstrong number.\n");
    else
        printf("It is not an Armstrong number.\n");

    return 0;
}
