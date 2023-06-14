// Write a C program to print all natural numbers from 1 to n. - using
// a while loop.

#include <stdio.h>

int main(){

    int n,i=1;

    printf("\nEnter N : ");
    scanf("%d",&n);

    while(i <= n){
        printf("%d, ",i);
        i++;
    }

    return 0;
}