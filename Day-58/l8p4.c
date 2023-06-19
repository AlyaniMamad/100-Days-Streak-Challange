// Write a C program to collect an array of integers from the user.
// Then remove duplicate elements from that Array if any. Also show
// the count of duplicate elements.
// Example:
// Original array is: 11 12 13 14 11 12 13 15
// New array is: 11 12 13 14 15

#include <stdio.h>

int main(){

    int n,count=0;

    printf("\nEnter Size : ");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter %d Elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nOriginal Array :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count ++;
                for(int k=j; k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;j--;
            }
        }
    }

    printf("\nAfter Removing Duplicates Array :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n\nDuplicates : %d",count);

    return 0;
}
