// Sort First half in Ascending and Second half in descending order in C

#include <stdio.h>

int asc(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int desc(int arr[],int n){
    for(int i=n/2;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){

    int n;
    printf("\nEnter N : ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    asc(arr,n);
    desc(arr,n);
    print(arr,n);

    return 0;
}