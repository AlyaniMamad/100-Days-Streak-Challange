// Write a simple C program to check the year is a leap year.


#include<stdio.h>

int main(){

    int year;
    char ch;

    x:

    printf("\nEnter Year : ");
    scanf("%d",&year);

    if(year<1000 || year>10000){
        printf("\nPlease Enter 4 Digit Year Only");
        goto y;
    }else{
        if((year%400==0 && year%100!=0) || (year%4==0)){
            printf("\n%d Is Leap Year",year);
        }else{
            printf("\n%d Is Not An Leap Year ",year);
        }
    }
    y:
    printf("\nDo You Want To Continue : Y/N\n");
    scanf(" %c",&ch);

    if(ch=='Y' || ch=='y'){
        goto x;
    }
    return 0;
}