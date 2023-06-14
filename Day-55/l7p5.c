// Write a C program to print all even numbers between 1 to 100. -
// using a while loop.

#include <stdio.h>

int main(){

    int i=1;

    while(i<=100){

        if(i%2==0){
            printf("%d ",i);
        }
        i++;
    }

    return 0;
}