//               *
//              ***
//             *****
//            *******

#include <stdio.h>

int main(){

    int n=5;

    for(int i=0;i<=n;i++){
        for(int sp=n;sp>i;sp--){
            printf(" ");
        }
        for(int st=0;st<(i*2)-1;st++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}