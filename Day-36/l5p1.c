// Write a program to check whether an entered number is positive, negative or
// zero. Take integer value from the user.

#include<stdio.h>

int main(){

    int no;

    printf("\nEnter Number :");
    scanf("%d",&no);

    if(no>0){
        printf("\n%d is positive",no);
    }else if(no<0){
        printf("\n%d is negative",no);
    }else if(no==0){
        printf("\nIts an ZERO(0)");
    }else{
        printf("\nEnter A Number");
    }

    return 0;
}