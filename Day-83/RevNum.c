#include <stdio.h>

int main()
{

    int no;

    printf("\nEnter Number : ");
    scanf("%d", &no);

    printf("\nOriginal Num : %d",no);
    printf("\nReversed Num : ");
    while (no!=0){
        int rem=no%10;
        printf("%d",rem);
        no=no/10;
    }
    return 0;
}