// Write a code to find the second maximum element from an array without using the sort function. 

#include <stdio.h>

int main(){

    int n;
    printf("\nEnter N : ");
    scanf("%d",&n);

    int arr[n];
    

    printf("\nEnter %d Elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0],secmax=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secmax = max;
            max=arr[i];
        }else if((arr[i]>secmax) && (arr[i]!=max)){
            secmax=arr[i];
        }
    }
   

    printf("MAX : %d",max);

    printf("\nSEC MAX : %d",secmax);

    return 0;
}

