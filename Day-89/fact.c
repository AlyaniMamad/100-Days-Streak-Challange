#include <stdio.h>

int main(){

    int no;
    printf("\nEnter Number : ");
    scanf("%d",&no);

    int fact=1;

    while(no!=0){
        
        fact *= no;

        no--;
    }

    printf("Factorial Is : %d",fact);

    return 0;
}