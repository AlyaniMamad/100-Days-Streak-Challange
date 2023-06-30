// Count of Distinct Numbers in C
// Example
// Input : arr[6] = {30, 50, 30, 10, 20, 40, 10, 20}
// Output : 5
// Explanation : The distinct elements are 30, 50, 10, 20, 40

#include <stdio.h>

int main(){

    int n,count=0;
    printf("\nEnter N : ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                continue;
            }else{
                count++;
            }
        }
    }

    return 0;
}