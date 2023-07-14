//    ******
//     ******
//      ******
//       ******
    
#include <stdio.h>

int main(){

    int n=5;

    for(int i=0;i<n;i++){
        for(int sp=0;sp<i;sp++){
            printf(" ");
        }
        for(int st=0;st<n;st++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
