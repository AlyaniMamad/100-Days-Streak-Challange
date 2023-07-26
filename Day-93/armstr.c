#include <stdio.h>
#include <math.h>

int main(){

    int no,sum=0,rem=0;
    printf("\nEnter No :");
    scanf("%d",&no);

    int orno=no;

    while (orno!=0){
        rem++;
        orno/=10;
    }
    // printf("%d",rem);

    orno=no;

    while(orno!=0){
        int temp=orno%10;
        sum+=pow(temp,rem);
        orno/=10;
    }

    printf("%d",sum);

    if(sum==no){
        printf("\nArmstrong Number");
    }else{
        printf("\nNot Armstrong Number");
    }
    

    return 0;
}