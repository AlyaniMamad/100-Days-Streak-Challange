// Question 4: Array Rotation
// Write a function that takes an array of integers and rotates it to the right by a given number of steps. Each step rotates the elements of the array by one position.

// Example:
// Input:
// Array: [1, 2, 3, 4, 5]
// Steps: 2
// Output: [4, 5, 1, 2, 3]

#include <stdio.h>

int main(){

    int n,step;
    printf("\nEnter N : ");
    scanf("%d",&n);

    int arr[n],op[n];
    printf("\nEnter %d Elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter Steps : ");
    scanf("%d",&step);

    for(int i=step;i<n-step;i++){
        op[i]=arr[i];
    }                                    

    printf("\nOutput : ");

    for(int i=0;i<n;i++){
        printf("%d ",op[i]);
    }
    return 0;
}