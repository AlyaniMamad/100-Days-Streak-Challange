// C program to find the frequency of each element in the array

#include <stdio.h>

int main(){

    int n;
    printf("\nEnter N : ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
           }
        }
    }
    
    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                i++;
                cnt++;
            }
        }
        printf("\n%d : %d vaar",arr[i],cnt);
    }

    return 0;
}