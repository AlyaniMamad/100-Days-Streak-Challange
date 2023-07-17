// Write the code to find the Fibonacci series upto the nth term.

#include <stdio.h>

int main(){

    int n,n1=0,n2=1,sum=0;
    printf("\nEnter N : ");
    scanf("%d",&n);

    printf("\nFiboNanci Series : ");
    printf("%d, %d, ",n1,n2);

    for(int i=2;i<=n;i++)
    {
        sum=n1+n2;
        printf("%d, ",sum);
        n1=n2;
        n2=sum;
    }

    return 0;
}