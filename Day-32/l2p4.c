// Write a simple C program to find the simple interest I = p*r*n/100.

#include<stdio.h>

int main(){
    float amount,r;
    int n;

    printf("\nEnter Amount : ");
    scanf("%f",&amount);

    printf("\nEnter Rate of  Intrest : ");
    scanf("%f",&r);

    printf("\nEnter Time : ");
    scanf("%d",&n);

    float I;
    I=(amount*r*n)/100;

    printf("Simple Intrest Is : %.2f",I);

    return 0;
}