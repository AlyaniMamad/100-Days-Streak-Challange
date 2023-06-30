#include <stdio.h>

int main(){

    char str[100];
    int len=0;

    printf("\nEnter String :");
    gets(str);

    for(int i=0;str[i]!='\0';i++){
        len++;
    }

    printf("\nLength of STR is %d",len);
    return 0;
}