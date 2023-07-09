// Given a string, check if it is a valid palindrome. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward, ignoring spaces, punctuation, and capitalization.

// Example:

// Input: "A man, a plan, a canal: Panama"
// Output: True
// Explanation: The given string is a valid palindrome when spaces, punctuation, and capitalization are ignored.

// Take your time to work on the solution, and let me know when you're ready for the next question or if you would like any hints.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char str[100],strnew[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);
    int j=0;
    for(int i=0;i<n;i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
                strnew[j]=tolower(str[i]);
                j++;
        }
    }
    strnew[j]='\0';


    int m=strlen(strnew);

    int end=m-1,st=0,flag=0;
    
    while (st<=end){
        if(strnew[st]!=strnew[end]){
            flag=1;
            break;
            
        }
        st++;
        end--;
    }

    printf("The String : %s",strnew);

    if(flag==1){
        printf("\n\nFalse");
    }else{
        printf("\n\nTrue");
    }

    return 0;
}