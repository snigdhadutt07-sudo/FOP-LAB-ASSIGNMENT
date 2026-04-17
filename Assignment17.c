//Assignment 17
/*To accept the number of terms a finds the sum of sine series*/
#include <stdio.h>
#include <math.h>
int main() {
    int n, i, j, sign = 1;
    float x, term, sum = 0.0;
    int fact;
    printf("Enter angle in degrees: ");
    scanf("%f", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    x = x * 3.14159 / 180;
    for(i = 0; i < n; i++) {

        fact = 1;
        for(j = 1; j <= (2*i + 1); j++) {
            fact = fact * j;
        }

        term = pow(x, (2*i + 1)) / fact;

        if(i % 2 == 0)
            sum = sum + term;
        else
            sum = sum - term;
    }

    printf("Sum of sine series = %.4f\n", sum);

    return 0;
}

