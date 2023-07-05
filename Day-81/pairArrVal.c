// Question 6: Given a sorted array of integers and a target value, determine if there exists a pair of numbers in the array whose sum is equal to the target value. Return true if such a pair exists, otherwise return false.

// Example:

// Input:
// Array: [1, 2, 3, 4, 5]
// Target: 7
// Output: True
// Explanation: The pair (2, 5) sums up to the target value of 7.

#include <stdio.h>

int main(){

    int n,target,flag=0;
    printf("\nEnter n :");
    scanf("%d",&n);
    int arr[n];

    printf("\nEnter %d elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter Target : ");;
    scanf("%d",&target);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==target){
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
        printf("\nTRUE");
    }else{
        printf("\nFALSE");
    }

    return 0;
}