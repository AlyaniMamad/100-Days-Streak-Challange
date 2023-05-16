#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
    int n;
    char buf[80];

    int r=open("f1.txt",O_RDONLY);
    n=read(r,buf,15);

    printf("\nNo. of chaaracters : %d",n);
    printf("\nActual Content : %s",buf);

    int w=open("try.txt",O_CREAT|O_WRONLY|O_TRUNC,0644);
    write(w,buf,n);
    printf("\nSuceess");

    close(r);
    close(w);
    return 0
}