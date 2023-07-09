// Input: [5, 2, 9, 3, 7]
// Output: 7
// Explanation: The second largest element in the array is 7.

#include <stdio.h>

int main(){

    int n;
    printf("\nEnter N : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d Elements : ",n);

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("second Largest Element is : %d",arr[n-2]);

    return 0;
}
