// Write a program that collects an integer array and sort them. Create a
// function to sort the array into ascending and descending order based on
// user preference

#include <stdio.h>

void asc(int arr[],int n){
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
    for(int i=0;i<n;i++){
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
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}

int main(){

    int n,ch;
    printf("\nEnter n : ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter %d Elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     
     printf("\n1.Ascending\n2.Descending\nEnter Your Choice : ");
     scanf("%d",&ch);
     if(ch==2){
        desc(arr,n);
     }else if(ch==1){
        asc(arr,n);
     }else{
        printf("\nInvalid Choice : ");
     }

    print(arr,n);

    return 0;
}