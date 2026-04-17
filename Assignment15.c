//Assignment 15
/* To generate pseudo random numbers*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, n;

    printf("Enter how many random numbers you want: ");
    scanf("%d", &n);
    srand(time(NULL));

    printf("Pseudo Random Numbers:\n");

    for(i = 1; i <= n; i++) {
        printf("%d\n", rand());
    }

    return 0;
}


