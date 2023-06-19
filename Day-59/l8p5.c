// Write a C program to collect 2 square matrices from the user. Do
// the following operation on the matrices.
// i. Transpose of both matrices.
// ii. Addition operation between matrices.
// iii. Subtraction operation between matrices.


#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the matrices: ");
    scanf("%d", &size);

    int matrix1[10][10], matrix2[10][10], transpose1[10][10], transpose2[10][10];
    int sum[10][10], difference[10][10];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            transpose1[i][j] = matrix1[j][i];
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            transpose2[i][j] = matrix2[j][i];
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("Transpose of the first matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", transpose1[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the second matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", transpose2[i][j]);
        }
        printf("\n");
    }

    printf("Sum of the matrices:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Difference of the matrices:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}
