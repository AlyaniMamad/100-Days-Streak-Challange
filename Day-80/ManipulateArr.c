// Question 1: Array Manipulation
// Write a function that takes an array of integers as input and returns a new array where each element at index 'i' of the new array is the product of all the numbers in the original array except the one at 'i'.

// Example:
// Input: [1, 2, 3, 4, 5]
// Output: [120, 60, 40, 30, 24]

#include <stdio.h>

int main(){

    int n;
    printf("\nEnter N : ");
    scanf("%d",&n);

    int arr[n],op[n];
    printf("\nEnter %d Elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        op[i]=1;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
        op[i]*=arr[j];
        }
    }

    printf("\nOutput : ");

    for(int i=0;i<n;i++){
        printf("%d ",op[i]);
    }


}