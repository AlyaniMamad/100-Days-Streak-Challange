// Write a C program to find Largest and Smallest Element in an
// Array. Collect an array of integers from the user.

#include <stdio.h>

int main(){

    int n,max=0,min,temp;

    printf("\nEnter No.Of Elements Of Array : ");
    scanf("%d",&n);
    printf("\nEnter %d Elements : ",n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

        if(min>arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }

    printf("\n%d Is Largest Element",max);
    printf("\n%d Is Smallest Element",min);

}