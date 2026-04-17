//Assignment 12
/*To accept two numbers from user and compute smallest divisor and Greatest Common Divisor of these two numbers. make it user define function*/
#include <stdio.h>
int smallestDivisor(int a, int b) {
    int i,min;
    if (a<b)
       min=a;
    else
       min=b; 
    for(i = 2; i <=min; i++) {
        if(a%i==0 && b%i==0){
            return i;
    }}
    return -1;
}
int findGCD(int a, int b) {
    int temp;
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Smallest divisor of %d = %d\n", num1, smallestDivisor(num1,num2));
    printf("GCD of %d and %d = %d\n", num1, num2, findGCD(num1, num2));

    return 0;
}

