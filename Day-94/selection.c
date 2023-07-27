#include <stdio.h>

int main(){
    
    int n;
    printf("\nEnter N : ");
    scanf("%d",&n); 

    int arr[n];
    printf("\nEnter %d Elements :",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    printf("\n");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}