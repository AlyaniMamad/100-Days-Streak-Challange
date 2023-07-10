// Given a non-empty array of integers, every element appears twice except for one. Find that single element.

// Example:

// Input: [4, 2, 1, 2, 1]
// Output: 4
// Explanation: The single element that appears only once in the array is 4.

#include <stdio.h>

int main(){

    int n,op=0;

    printf("\nEnter N : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d Elements : ",n);

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        op ^= arr[i];
    }

    printf("op : %d",op);

    return 0;
}