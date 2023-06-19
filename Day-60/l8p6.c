// Write a C Program to remove all non alphabetic characters in a
// String. Collect String from the user.

#include <stdio.h>

int main() {
    char str[100];
    char result[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove non-alphabetic characters
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("String after removing non-alphabetic characters: %s\n", result);

    return 0;
}


