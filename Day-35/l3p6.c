// Write a C program to swap two int numbers

#include <stdio.h>

int main(){

    int no1,no2;

    printf("\nEnter No1 :");
    scanf("%d",&no1);

    printf("\nEnter No2 :");
    scanf("%d",&no2);

    printf("\nOriginal Numbers \nNo1 : %d\nNo2 : %d\n",no1,no2);

    no1=no1+no2;
    no2=no1-no2;
    no1=no1-no2;

    printf("Swapped Numers \nNo1 : %d\nNo2 : %d",no1,no2);

    return 0;
}