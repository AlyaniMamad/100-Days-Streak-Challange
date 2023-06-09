// Write a C program that illustrates the run time field width [*] and precision
// adjustment while using printf( ).

#include <stdio.h>

int main() {
    int integerValue = 42;
    float floatValue = 3.14159;
    double doubleValue = 1234.56789;
    char stringValue[] = "Hello, world!";
    
    printf("Integer value: [%5d]\n", integerValue);  
    printf("Float value: [%.2f]\n", floatValue);     
    printf("Double value: [%.4lf]\n", doubleValue);  
    printf("String value: [%20s]\n", stringValue);   
    
    return 0;
}
