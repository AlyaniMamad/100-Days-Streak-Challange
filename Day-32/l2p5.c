// Write a simple C program to find the average of three numbers.

#include<stdio.h>

int main(){

    int n;
    printf("\nHow many numbers do you want :");
    scanf("%d",&n);

    float arr[n];
    float sum=0;

    printf("\nEnter %d Numbers : ",n);

    for(int i=0;i<n;i++){
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }

    float avg; 
    avg=sum / n;

    printf("\nAverage Is : %.2f",avg);

    return 0;
}