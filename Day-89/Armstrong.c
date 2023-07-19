// Program to check a number is Armstrong or not

#include <stdio.h>
#include <math.h>

int main(){

    int no,cnt=0,sum=0;
    printf("\nEnter Number : ");
    scanf("%d",&no);

    int orno=no;

    while(no!=0){
        cnt++;
        no/=10;
    }

    no=orno;

    while(orno!=0){
        int rem=orno%10;
        sum=pow(rem,cnt) + sum;
        orno/=10;
    }

    printf("%d",sum);
    if (sum == no) {
        printf("\nArmstrong number.");
    } else {
        printf("\nnot an Armstrong number.");
    }

    return 0;
}