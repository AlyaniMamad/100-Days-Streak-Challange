// C Program to Find Sum of Digits of a Number 

#include <stdio.h>

int main(){

    int no;
    printf("\nEnter Number :");
    scanf("%d",&no);

    int sum=0;

    while (no!=0){
        int rem=no%10;
        sum+=rem;
        no/=10;
    }

    printf("SUM : %d",sum);

    return 0;
}