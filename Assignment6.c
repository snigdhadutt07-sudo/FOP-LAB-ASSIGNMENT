// Assignment6
/*Write a C function to compute the factorial of a number with and without recursion.*/
#include <stdio.h>
// Factorial without recursion
int factorial(int n) {
    int i;
    unsigned long long fact = 1;

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}
//Factorial with recursion
unsigned long long factorialR(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorialR(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial with recursion = %llu\n", factorialR(num));
    printf("Factorial without recursion = %u\n", factorial(num));
    return 0;
}

