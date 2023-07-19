// Prime number

#include <stdio.h>

int main(){

    int no,flag=0;
    printf("\nEnter Number :");
    scanf("%d",&no);

    for(int i=2;i<no;i++){
        if(no%i==0){
            flag=1;
            break;
        }
    }

    if(flag==0){
        printf("\nPRIME");
    }else{
        printf("\nNOT PRIME");
    }

    return 0;
}