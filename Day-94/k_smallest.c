// Kth smallest element

#include <stdio.h>

int main(){
    
    int n,k;
    printf("\nEnter N : ");
    scanf("%d",&n); 

    int arr[n];
    printf("\nEnter %d Elements :",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("\nEnter K :");
    scanf("%d",&k);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    

    printf("\n %d ",arr[k-1]);

    return 0;
}