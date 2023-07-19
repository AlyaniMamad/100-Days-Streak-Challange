// Palindrome Number in C

#include <stdio.h>

int main(){

    int no;
    printf("\nEnter Number : ");
    scanf("%d",&no);

    int orno=no,rev=0;

    while(no!=0){
        int rem=no%10;
        rev = rev*10+rem;
        no/=10;
    }

    if(orno==rev){
        printf("\nYes It Is");
    }else{
        printf("\nNope");
    }

    return 0;
}