// Write a C to program to check whether the given number is Armstrong or not.

#include <stdio.h>
#include<math.h>

int main(){

    int num;

    printf("\nEnter Number : ");
    scanf("%d",&num);

    int ornum = num;
    int n=0,res=0,rem;

    while(ornum != 0){
        num/=10;
        ++n;
    }

    ornum = num;

    while(ornum !=0){
        rem = ornum%10;
        res = pow(rem,n);
        ornum/=10;
    }

    if(res == num){
        printf("\n%d is Armstrong no\n",num);
    }else{
        printf("\n%d is Not Armstrong no\n",num);
    }

    return 0;
}
