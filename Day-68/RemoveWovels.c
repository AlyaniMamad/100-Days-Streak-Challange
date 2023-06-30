// Write a program that will take one string as input the program will then remove vowels a e i o u.

// C Program to Remove Vowels from a String

#include <stdio.h>
#include <ctype.h>

int main(){

    char str[100],res[100]="";

    printf("\nEnter String : ");
    gets(str);

    int j=0;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='I' || str[i]=='i'|| str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u'){
            continue;
        }else if(isdigit(str[i])){
            continue;
        }else{
            res[j++]=str[i];
        }
    }

    printf("\nString is %s",res);

    return 0;
}