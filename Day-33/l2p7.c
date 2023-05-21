// Write a simple C program to check if the number is Odd or Even.

#include<stdio.h>

int main()
{
    int no;

    printf("\nEnter Number : ");
    scanf("%d",&no);

    if(!(no%2==0)){//condition for checking odd number
         printf("\n%d is Odd Number!",no); 
    }else{
         printf("\n%d is even Number!",no);
    }

    return 0;
}