//  Provided three numbers in input, Find the greatest number using a C program.

#include<stdio.h>

int main()
{
    int no1,no2,no3;
    printf("\nEnter no1 : ");
    scanf("%d",&no1);
    printf("\nEnter no2 : ");
    scanf("%d",&no2);
    printf("\nEnter no3 : ");
    scanf("%d",&no3);

    if(no1>no2 && no1>no3){
        printf("\nNo 1 Is Greater");
    }else if(no2>no1 && no2>no3){
        printf("\nNo2 Is Greater");
    }else if(no3>no1 && no3>no2){
        printf("\nNo3 Is Greater");
    }else if(no1==no2 || no2==no3 || no3==no1)
    {
        printf("\nThere are two or all same number ");
    }else{
        printf("\nInvalid Input");
    }

    return 0;
}