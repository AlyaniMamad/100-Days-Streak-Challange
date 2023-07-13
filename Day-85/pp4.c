        //    *******
        //     *****
        //      ***
        //       *

#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int sp = 0; sp < i; sp++) {
            printf(" ");
        }
        for (int j = 0; j < 2*(n-i) -1; j++) {
            printf("*");
        }
        printf("\n");
    } 

    return 0;
}
