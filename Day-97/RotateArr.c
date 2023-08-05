// Question 1: Rotate Array
// Given an array of integers, rotate the array to the right by k steps, where k is a non-negative integer.

// Example:
// Input: [1, 2, 3, 4, 5, 6, 7] and k = 3
// Output: [5, 6, 7, 1, 2, 3, 4]

#include <stdio.h>

int main() {
    int n, k;
    printf("\nEnter N: ");
    scanf("%d", &n);

    int arr[n], secarr[n];
    printf("\nEnter %d Elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter K: ");
    scanf("%d", &k);
    // Rotate the array to the right by k steps
    for (int i = 0; i < n; i++) {
        int rotatedIndex = (i + k) % n;
        secarr[rotatedIndex] = arr[i];
    }
    printf("\nRotated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", secarr[i]);
    }

    return 0;
}
