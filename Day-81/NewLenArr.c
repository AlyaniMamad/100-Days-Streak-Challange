#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0)
        return 0;
    
    int index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[index]) {
            index++;
            arr[index] = arr[i];
        }
    }
    
    return index + 1;
}

int main() {
    int n;
    printf("\nEnter N : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d Elements : ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int newLength = removeDuplicates(arr, n);
    printf("\nOutput: %d\n", newLength);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newLength; i++)
        printf("%d ", arr[i]);

    return 0;
}
