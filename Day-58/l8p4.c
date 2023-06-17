// Write a C program to collect an array of integers from the user.
// Then remove duplicate elements from that Array if any. Also show
// the count of duplicate elements.
// Example:
// Original array is: 11 12 13 14 11 12 13 15
// New array is: 11 12 13 14 15

#include <stdio.h>

int main() {
    int size, i, j, count = 0;
    
    printf("Enter the size : ");
    scanf("%d", &size);
    
    int array[size];
    
    printf("Enter the elements :\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                int k;
                count++;
                for (k = j; k < size - 1; k++) {
                    array[k] = array[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    
    printf("New array after removing duplicates:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\nduplicate elements: %d\n", count);
    
    return 0;
}
