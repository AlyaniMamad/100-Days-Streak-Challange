// Write a menu driven program to demonstrate following string
// functions: [Take necessary required inputs]
// STRING LENGTH
// STRING COPY
// STRING COMPARE
// STRING CONCAT
// UPPER CASE
// LOWER CASE

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100],ch;
    int choice;

    rerun:

    printf("\nEnter a string: ");
    scanf("%s", str1);

    printf("Menu:\n");
    printf("1. String Length\n");
    printf("2. String Copy\n");
    printf("3. String Compare\n");
    printf("4. String Concatenation\n");
    printf("5. Convert to Upper Case\n");
    printf("6. Convert to Lower Case\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int length = strlen(str1);
            printf("Length of the string: %d\n", length);
            break;
        }
        case 2: {
            char copy[100];
            strcpy(copy, str1);
            printf("Copied string: %s\n", copy);
            break;
        }
        case 3: {
            printf("Enter another string: ");
            scanf("%s", str2);
            int result = strcmp(str1, str2);
            if (result == 0) {
                printf("Strings are equal\n");
            } else if (result < 0) {
                printf("String 1 is less than String 2\n");
            } else {
                printf("String 1 is greater than String 2\n");
            }
            break;
        }
        case 4: {
            printf("Enter another string: ");
            scanf("%s", str2);
            char concat[200];
            strcpy(concat, str1);
            strcat(concat, str2);
            printf("Concatenated string: %s\n", concat);
            break;
        }
        case 5: {
            for (int i = 0; str1[i] != '\0'; i++) {
                str1[i] = toupper(str1[i]);
            }
            printf("Upper case string: %s\n", str1);
            break;
        }
        case 6: {
            for (int i = 0; str1[i] != '\0'; i++) {
                str1[i] = tolower(str1[i]);
            }
            printf("Lower case string: %s\n", str1);
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    printf("\nWants To Re-Run ?Y/N : ");
    scanf(" %c",&ch);

    if(ch=='Y' || ch=='y'){
        goto rerun;
    }

    return 0;
}
