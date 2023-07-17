// Write a code to reverse a number

#include <stdio.h>

int main(){

    int no,rem;
    printf("\nEnter Number : ");
    scanf("%d",&no);
    printf("\nReversed Number : ");
    while(no!=0){
        printf("%d",rem = no%10); 
        no/=10;
    }

    return 0;
}