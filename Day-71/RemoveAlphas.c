// Removing all characters from string except alphabets
// In this article we will learn about Removing all characters from string except alphabets.

// In the process to do this all the special characters (!,@,#,etc.) and numeric characters (1,2,3,etc.) need to removed from the string. 

// Input:- 12pre5pinst45a
// Output:- prepinsta

#include <stdio.h>
#include <string.h>

int main(){

    char str[100],cpy[100];
    int i=0,j=0;

    printf("\nEnter String : ");
    gets(str);

    int n=strlen(str);

    for(i=0;i<n;i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            cpy[j]=str[i];
            j++;
        }
    }

    cpy[i] = '\0';


    printf("\nOriginal String : %s",str);
    printf("\nModified Str : %s",cpy);

    return 0;
}