//Assignment 16
/*To accept list of N integers and partition list into two sub lists even and odd numbers*/
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n], even[n], odd[n];
    int e = 0, o = 0;
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            even[e] = a[i];
            e++;
        } else {
            odd[o] = a[i];
            o++;
        }
    }
    printf("\nEven numbers: ");
    for(i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }
    printf("\nOdd numbers: ");
    for(i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}

