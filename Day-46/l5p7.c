#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the lengths of the sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%d", &side1);
    printf("Side 2: ");
    scanf("%d", &side2);
    printf("Side 3: ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is an Equilateral triangle.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is an Isosceles triangle.\n");
    } else {
        printf("The triangle is a Scalene triangle.\n");
    }

    return 0;
}
