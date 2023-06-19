// Write a C program to find the total number of alphabets, digits or
// special characters in a string. Also count the total number of
// vowels and consonants. Collect String from the user

#include <stdio.h>

int main() {
    char str[100];
    int i, alphaCount = 0, digitCount = 0, specialCount = 0, vowelCount = 0, consonantCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphaCount++;
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        } else if (str[i] >= '0' && str[i] <= '9') {
            digitCount++;
        } else if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            specialCount++;
        }
    }

    printf("Total number of alphabets: %d\n", alphaCount);
    printf("Total number of digits: %d\n", digitCount);
    printf("Total number of special characters: %d\n", specialCount);
    printf("Total number of vowels: %d\n", vowelCount);
    printf("Total number of consonants: %d\n", consonantCount);

    return 0;
}
