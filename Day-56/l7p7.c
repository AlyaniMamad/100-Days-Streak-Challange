// Write a C program to print Fibonacci series up to n terms using
// loop.
// Fibonacci series:
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

#include <stdio.h>

int main() {
    int n, i, term1 = 0, term2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }

    return 0;
}
