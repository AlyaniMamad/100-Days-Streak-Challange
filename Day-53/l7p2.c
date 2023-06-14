// Write a c program to find the largest digit from the given number.

#include <stdio.h>

int main(){

    int no,digit;
    int largestdigit=0;

    printf("\nEnter Number : ");
    scanf("%d",&no);
    int orno=no;

    while(no!=0){
        digit = no%10;

        if(digit>largestdigit){
            largestdigit=digit;
        }

        no = no/10;
    }

    printf("\n %d Is largest Digit In %d",largestdigit,orno);

    return 0;
}