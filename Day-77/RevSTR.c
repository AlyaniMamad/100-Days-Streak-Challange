// Question 2: String Reversal
// Write a function that takes a string as input and returns the reverse of that string.

// Example:
// Input: "Hello, World!"
// Output: "!dlroW ,olleH"

#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int i;

    printf("\nEnter String : ");
    gets(str);

    int n=strlen(str);
    int end=n-1;

    for(int st=0;st<end;st++,end--){
        char temp=str[st];
        str[st]=str[end];
        str[end]=temp;
        //st++;end--;
    }

    //str[i]='\0';
    printf("Reversed STR : %s",str);

    return 0;
}