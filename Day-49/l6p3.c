// Write a C program that checks whether a character entered by the user is a
// vowel or not. Give the user a chance to re-run the program or terminate the
// program

#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    char choice;
    
    do{
        printf("Enter a character: ");
        scanf(" %c", &ch);
        
        ch = tolower(ch);
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("%c is a vowel.\n", ch);
        else
            printf("%c is not a vowel.\n", ch);
        
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
        printf("\n");
    }while (choice == 'y' || choice == 'Y');
    
    return 0;
}
