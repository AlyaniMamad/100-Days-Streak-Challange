// . Write a C Program to demonstrate the limits of data types using limits.h

#include <stdio.h>
#include <limits.h>

int main() {
    printf("Minimum value of signed char: %d\n", SCHAR_MIN);
    printf("Maximum value of signed char: %d\n", SCHAR_MAX);
    printf("Maximum value of unsigned char: %u\n", UCHAR_MAX);
    printf("Minimum value of short int: %d\n", SHRT_MIN);
    printf("Maximum value of short int: %d\n", SHRT_MAX);
    printf("Maximum value of unsigned short int: %u\n", USHRT_MAX);
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of int: %d\n", INT_MAX);
    printf("Maximum value of unsigned int: %u\n", UINT_MAX);
    printf("Minimum value of long int: %ld\n", LONG_MIN);
    printf("Maximum value of long int: %ld\n", LONG_MAX);
    printf("Maximum value of unsigned long int: %lu\n", ULONG_MAX);
    printf("Minimum value of long long int: %lld\n", LLONG_MIN);
    printf("Maximum value of long long int: %lld\n", LLONG_MAX);
    printf("Maximum value of unsigned long long int: %llu\n", ULLONG_MAX);
    
    return 0;
}
