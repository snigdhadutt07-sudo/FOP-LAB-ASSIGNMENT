//Assignment 5
/*Write a program in C to perform basic operations such as addition, saddle point, inverse, magic square of two matrices.*/
#include <stdio.h>
#define MAX 10
// Function to read matrix
void readMatrix(int mat[MAX][MAX], int r, int c) {
    int i, j;
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
}
// Function to print matrix
void printMatrix(int mat[MAX][MAX], int r, int c) {
    int i, j;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}
// Addition of matrices
void addMatrix(int A[MAX][MAX], int B[MAX][MAX], int r, int c) {
    int i, j, C[MAX][MAX];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            C[i][j] = A[i][j] + B[i][j];
    printf("Resultant Matrix:\n");
    printMatrix(C, r, c);
}
// Saddle point
void saddlePoint(int mat[MAX][MAX], int r, int c) {
    int i, j, k, min, col;
    for(i = 0; i < r; i++) {
        min = mat[i][0];
        col = 0;
        for(j = 1; j < c; j++) {
            if(mat[i][j] < min) {
                min = mat[i][j];
                col = j;
            }
        }
        for(k = 0; k < r; k++) {
            if(mat[k][col] > min)
                break;
        }
        if(k == r) {
            printf("Saddle Point: %d\n", min);
            return;
        }
    }
    printf("No Saddle Point found.\n");
}
// Magic square check
void magicSquare(int mat[MAX][MAX], int n) {
    int i, j, sum = 0, temp;
    for(j = 0; j < n; j++)
        sum += mat[0][j];
    for(i = 1; i < n; i++) {
        temp = 0;
        for(j = 0; j < n; j++)
            temp += mat[i][j];
        if(temp != sum) {
            printf("Not a Magic Square\n");
            return;
        }
    }
    for(j = 0; j < n; j++) {
        temp = 0;
        for(i = 0; i < n; i++)
            temp += mat[i][j];
        if(temp != sum) {
            printf("Not a Magic Square\n");
            return;
        }
    }
    printf("Magic Square\n");
}
// Inverse of 2x2 matrix
void inverse2x2(int mat[MAX][MAX]) {
    int a = mat[0][0], b = mat[0][1];
    int c = mat[1][0], d = mat[1][1];
    float det = a*d - b*c;
    if(det == 0) {
        printf("Inverse does not exist.\n");
        return;
    }
    printf("Inverse Matrix:\n");
    printf("%.2f %.2f\n", d/det, -b/det);
    printf("%.2f %.2f\n", -c/det, a/det);
}
int main() {
    int choice, r, c, n;
    int A[MAX][MAX], B[MAX][MAX];
    printf("1. Addition\n2. Saddle Point\n3. Inverse (2x2)\n4. Magic Square\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);
            printf("Enter Matrix A:\n");
            readMatrix(A, r, c);
            printf("Enter Matrix B:\n");
            readMatrix(B, r, c);
            addMatrix(A, B, r, c);
            break;
        case 2:
            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);
            printf("Enter Matrix:\n");
            readMatrix(A, r, c);
            saddlePoint(A, r, c);
            break;
        case 3:
            printf("Enter 2x2 Matrix:\n");
            readMatrix(A, 2, 2);
            inverse2x2(A);
            break;
        case 4:
            printf("Enter order (n x n): ");
            scanf("%d", &n);
            printf("Enter Matrix:\n");
            readMatrix(A, n, n);
            magicSquare(A, n);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
