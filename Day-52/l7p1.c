// Write a program to check whether the given number is binary or
// not.

#include <stdio.h>

int main(){

    int no;
    int temp,flag=0;

    printf("\nEnter Number : ");
    scanf("%d",&no);

    int orno=no;

    while (no!=0){
        temp = no%10;
        if(temp==0 || temp==1){
            flag=1;
        }else{
            flag=0;
            break;
        }
        no/=10;
    }

    if(flag==1)
        printf("\n%d Is An Binary Number",orno);
    else
        printf("\n%d Is not An Binary Number",orno);

    return 0;
}