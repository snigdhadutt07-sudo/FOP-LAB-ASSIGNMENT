//Assignment 20
/*Write a C function to swap two numbers with and without pointers.*/
#include <stdio.h>
// Swap without pointers 
void swapValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\n[Without Pointer] Inside function: a = %d, b = %d\n", a, b);
}
// Swap with pointers 
void swapPointer(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("\nBefore swap: x = %d, y = %d\n", x, y);
    // Without pointer swap
    swapValue(x, y);
    printf("[Without Pointer]After swapValue call: x = %d, y = %d\n", x, y);
    // With pointer swap
    swapPointer(&x, &y);
    printf("\n[With Pointer] After swapPointer call: x = %d, y = %d\n", x, y);
    return 0;
}
