// Consider two number inputs provided M and N. Write a C program to find the quotient
// and remainder when M is divided with N.

#include<stdio.h>

int main()
{
    int m,n;

    printf("\nEnter M : ");
    scanf("%d",&m);

    printf("\nEnter N : ");
    scanf("%d",&n);

    float q=(float)m/n;
    int r=m%n;

    printf("\nQuotient Is : %f",q);
    printf("\nReminder Is : %d",r);

    return 0;
}