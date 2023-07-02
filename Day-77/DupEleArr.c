#include <stdio.h>

int main(){

    int n,count=0;
    printf("\nEnter N : ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter %d Elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }

    printf("\nCounts : %d",count);

    return 0;
}