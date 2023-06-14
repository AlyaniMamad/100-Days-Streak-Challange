// Write a program in C to display the pattern like a right angle
// triangle using an asterisk.
// E.g. for N=4
// *
// **
// ***
// ****

#include <stdio.h>

int main(){

    int n;
    printf("\nEnter N :");
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    } 
}