// Given an array of integers, rearrange the array such that all even numbers appear before the odd numbers. The relative order of even and odd numbers should remain the same.

// Example:

// Input: [3, 1, 2, 4, 6, 5]
// Output: [2, 4, 6, 3, 1, 5]
// Explanation: In the output, all even numbers (2, 4, 6) appear before the odd numbers (3, 1, 5), and the relative order of numbers is maintained.

#include <stdio.h>

int main(){

    int n;
    printf("\nEnter N : ");
    scanf("%d",&n);
    int arr[n],newarr[n];
    printf("\nEnter %d Elements : ",n);

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    int j=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            newarr[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            newarr[j]=arr[i];
            j++;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",newarr[i]);
    }
    
    return 0;
}