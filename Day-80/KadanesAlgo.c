// Question 8: Largest Subarray Sum
// Write a function that takes an array of integers as input and finds the largest sum of any contiguous subarray within the array.

// Example:
// Input: [1, -2, 3, 4, -1, 2, 1, -5, 4]
// Output: 9 (The largest sum is obtained from the subarray [3, 4, -1, 2, 1])

// Input: [-2, 1, -3, 4, -1, 2, 1, -5, 4]
// Output: 6 (The largest sum is obtained from the subarray [4, -1, 2, 1])

#include <stdio.h>

int main(){

    int n,max=0;
    printf("\nEnter N : ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter %d Elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i+1;j<n;j++){
            sum=sum+arr[j];
            if(max<sum){
                max=sum;
            }
        }
    }

    printf("\nMax : %d",max);

    return 0;
}
