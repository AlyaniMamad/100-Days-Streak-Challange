// Program to Reverse a Number in C
 
#include <stdio.h>
 
int main(){

    int no;

    printf("\nEnter Number :");
    scanf("%d",&no);

    while(no!=0){
        printf("%d",no%10);
        no/=10;
    }

    return 0;
}