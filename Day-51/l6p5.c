// You are given two 4-digit positive integers. Write a C program to calculate and
// print out the sum of the products of each pair of digits occupying the same
// position in the two numbers. For example, if first number is 3445 and second
// number is 4534, then output will 64 (3*4 + 4*5 + 4*3 + 5*4 = 64)
#include <stdio.h>

int main() {
    int num1, num2;
    int sum = 0;
    
    printf("Enter the first 4-digit number: ");
    scanf("%d", &num1);
    
    printf("Enter the second 4-digit number: ");
    scanf("%d", &num2);
    
    for (int i = 0; i < 4; i++) {
        sum += (num1 % 10) * (num2 % 10);
        num1 /= 10;
        num2 /= 10;
    }
    
    printf("Sum of products of corresponding digits: %d\n", sum);
    
    return 0;
}
