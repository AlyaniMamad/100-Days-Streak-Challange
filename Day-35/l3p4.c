// Write a C Program to Multiply Two Floating-Point Numbers and show output with 4 digit
// precision.

#include<stdio.h>

int main(){

    float no1,no2;

    printf("\nEnter No1 :");
    scanf("%f",&no1);

    printf("\nEnter No2 :");
    scanf("%f",&no2);

    float ans = no1*no2;

    printf("%.4f * %.4f = %.4f ",no1,no2,ans);

    return 0;
}