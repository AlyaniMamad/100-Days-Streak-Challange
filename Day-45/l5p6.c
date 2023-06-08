#include <stdio.h>

int main() {
    int number, originalNumber, remainder, reversedNumber = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
