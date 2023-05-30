// Write a C to program to check whether the given number is Armstrong or not.

#include <stdio.h>
#include<math.h>

int main(){

    int no;

    printf("\nEnter Number : ");
    scanf("%d",&no);

    int ornum = no;
    int n=0,res=0,rem;

    while(ornum != 0){
        no/=10;
        ++n;
    }

    ornum = no;

    while(ornum !=0){
        rem = ornum%10;
        res = pow(rem,n);
        ornum/=10;
    }

    if(res == no){
        printf("\n%d is Armstrong no",no);
    }else{
        printf("\n%d is Not Armstrong no",no);
    }

    return 0;
}