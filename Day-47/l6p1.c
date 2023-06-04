// Get the lengths of three sides of a triangle from the user. Check whether the
// triangle can be formed or not. If possible then classify the triangle as equilateral,
// isosceles or scalene. Otherwise, if the triangle cannot be formed, give the user a
// chance to re-enter the lengths of the sides or terminate the program. Draw the
// flowchart and Write an algorithm for the same.
// Hint: If the sum of the lengths of any two sides is greater than the length of the
// third side then a triangle can be formed.

#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the lengths of three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%d", &side1);
    printf("Side 2: ");
    scanf("%d", &side2);
    printf("Side 3: ");
    scanf("%d", &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid side lengths. Triangle cannot be formed.\n");
    } else if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is an Equilateral triangle.\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is an Isosceles triangle.\n");
        } else {
            printf("The triangle is a Scalene triangle.\n");
        }
    } else {
        printf("Triangle cannot be formed with the given side lengths.\n");
    }

    return 0;
}
