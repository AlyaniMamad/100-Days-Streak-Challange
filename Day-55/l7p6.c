// Write a C program to find the sum of all odd numbers between 1
// to n.

#include <stdio.h>

int main(){

    int n,i=1,sum=0;

    printf("\nEnter N : ");
    scanf("%d",&n);


    printf("\nOdd Number Are : \n");
    while(i<=n){
        if(i%2!=0){
            sum+=i;
            printf("%d ",i);
        }
        i++;
    }

    printf("\nSum Of ODD Numbers : %d",sum);
    return 0;
}