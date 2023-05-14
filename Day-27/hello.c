#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>

int main(){

    pid_t pid;
    switch (pid)
    {
    case -1:
        printf("Frok Error");
        break;
    case 0:
        printf("child Process");
        break;
    default:
        printf("Parent process");
        break;
    }
}