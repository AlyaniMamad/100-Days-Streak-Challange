// Write a C program to count the total number of words in a string.

#include <stdio.h>

int main(){

    char str[100];
    int count=1;

    x:

    printf("\nEnter String : ");
    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[0]==' '){
            printf("\nPlease Re-Input ! Don't Space At First\n");
            goto x;
        }
        if(str[i]==' '){
            count ++;
        }
    }

    printf ("\nTotal Words : %d",count);

    return 0;
}