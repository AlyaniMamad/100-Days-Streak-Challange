// Question: Given an array of integers, find the maximum difference between two elements in the array, where the larger element appears after the smaller element.

// For example, given the array [7, 2, 3, 10, 5], the maximum difference is 8 because 10 - 2 = 8.

// Write a function in your preferred programming language to solve this problem efficiently.

#include <stdio.h>
//#include <stdlib.h>
#include <limits.h>

int main(){

    int n,max=0;
    printf("%d",max);

    printf("\nEnter n :");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter %d Elements :",n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=(arr[i]-arr[j]);
            if(max<temp){
                max=temp;
            }
        }
    }

    printf("Max Diff : %d",max);

    return 0;
}