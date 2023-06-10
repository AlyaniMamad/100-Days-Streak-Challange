// Write a C Program to Demonstrate the specifiers/ modifiers in C. Print the size of
// applicable primitive data types with long and short specifiers.[Use sizeof operator]

#include <stdio.h>

int main()
{
    printf("Size of short int: %zu byte(s)\n", sizeof(short int));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of long double: %zu byte(s)\n", sizeof(long double));
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of unsigned int: %zu byte(s)\n", sizeof(unsigned int));
    printf("Size of signed int: %zu byte(s)\n", sizeof(signed int));

    return 0;
}
