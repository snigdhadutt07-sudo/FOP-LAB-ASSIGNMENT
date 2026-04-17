//Assignment10
/*To simulate a simple calculator that performs basic tasks such as addition, subtraction, multiplication and division with special operations like computing xy and x!*/
#include <stdio.h>
int power(int x, int y) {
    int result = 1;
    for(int i = 1; i <= y; i++) {
        result = result * x;
    }
    return result;
}
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
int main() {
    int choice;
    int a, b;
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice >= 1 && choice <= 5) {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
    }else if(choice == 6) {
        printf("Enter a number: ");
        scanf("%d", &a);
    }switch(choice) {
        case 1:
            printf("Result = %d\n", a + b);
            break;
        case 2:
            printf("Result = %d\n", a - b);
            break;
        case 3:
            printf("Result = %d\n", a * b);
            break;
        case 4:
            if(b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;
        case 5:
            printf("Result = %d\n", power(a, b));
            break;
        case 6:
            printf("Result = %d\n", factorial(a));
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
