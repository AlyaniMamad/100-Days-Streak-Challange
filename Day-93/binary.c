#include <stdio.h>

int main(){

    int n,key;
    printf("\nEnter N :");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter Key :");
    scanf("%d",&key);

    int low=0,high=arr[n-1];

    int flag=0;

    while(low<=high){

        int mid = (low+high)/2;

        if(arr[mid]==key){
            flag=1;
            break;
        }else if(arr[mid]>key){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    if(flag==1){
        printf("\nFound");
    }else{
        printf("\nNot Found");
    }

    return 0;
}