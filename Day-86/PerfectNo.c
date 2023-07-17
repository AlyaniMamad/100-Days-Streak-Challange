#include <stdio.h>

int main(){

    int n,sum=0;
    printf("\nEnter N: ");
    scanf("%d",&n);

    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }

    if(sum==n){
        printf("\nIts Perfect Number");
    }else{
        printf("\nIts Not An Perfect Number");
    }

    return 0;
}