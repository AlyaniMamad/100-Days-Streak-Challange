// Write a simple C program to check if the number is negative or positive.

#include<stdio.h>

int main()
{
    int no;

    x:
    printf("\nEnter Number : ");
    scanf("%d",&no);

    if(no>0){
        printf("\n%d Is Positive Number",no);
    }else if(no<0){
        printf("\n%d Is Negative Number",no);
    }else{
        printf("\nPlease Enter Number Only");
    }

    printf("\nDo You Want To Continue : 1/0\n");
    int ch;
    scanf("%d",&ch);

    if(ch==1){
        goto x;
    }else{
        printf("\nExiting...");
    }

    return 0;
}