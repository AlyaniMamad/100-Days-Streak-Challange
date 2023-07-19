#include <stdio.h>

int main(){

    int no,p,res=1;
    printf("\nEnter Number : ");
    scanf("%d",&no);

    printf("\nEnter p :");
    scanf("%d",&p);

    while(p!=0){
        res*=no;
        p--;
    }
    printf("\nPOWER IS : %d",res);

    return 0;
}