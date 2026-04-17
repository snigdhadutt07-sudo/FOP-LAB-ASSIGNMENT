//Assignment11
/* To accept the number and Compute a) square root of number, b) Square of number, c) Cube of number d) check for prime, d) factorial of number e) prime factors*/
// Assignment11 (Menu Repeat Version)

#include <stdio.h>
#include <math.h>
int main() {
    int n, choice, i, flag, fact, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        printf("\n----- MENU -----\n");
        printf("1. Square Root\n");
        printf("2. Square\n");
        printf("3. Cube\n");
        printf("4. Prime Check\n");
        printf("5. Factorial\n");
        printf("6. Prime Factors\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Square root = %.2f\n", sqrt(n));
                break;
            case 2:
                printf("Square = %d\n", n*n);
                break;
            case 3:
                printf("Cube = %d\n", n*n*n);
                break;
            case 4:
                flag = 1;
                for(i = 2; i <= n/2; i++) {
                    if(n % i == 0) {
                        flag = 0;
                        break;
                    }
                }
                if(flag == 1 && n > 1)
                    printf("Prime Number\n");
                else
                    printf("Not Prime\n");
                break;
            case 5:
                if(n < 0) {
                    printf("Factorial not defined\n");
                } else {
                    fact = 1;
                    for(i = 1; i <= n; i++) {
                        fact = fact * i;
                    }
                    printf("Factorial = %d\n", fact);
                }
                break;
            case 6:
                temp = n;
                printf("Prime factors: ");
                for(i = 2; i <= temp; i++) {
                    while(temp % i == 0) {
                        printf("%d ", i);
                        temp = temp / i;
                    }
                }
                printf("\n");
                break;
            case 7:
                printf("Program ended\n");
                break;
            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 7); 

    return 0;
}
