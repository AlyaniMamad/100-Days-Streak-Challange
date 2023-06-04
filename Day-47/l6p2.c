//  Write a program in C to carry out the arithmetic operations addition, subtraction,
// multiplication, and division between two variables based on users input. Give the
// user a chance to re-run the operation or terminate the program. Draw the
// flowchart and Write an algorithm for the same.

#include <stdio.h>

int main() {
    int choice;
    int variable1, variable2;
    int result;
    char repeat;

    do {
        printf("Select an arithmetic operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        printf("Enter two variables: ");
        scanf("%d %d", &variable1, &variable2);

        switch (choice) {
            case 1:
                result = variable1 + variable2;
                printf("Result: %d\n", result);
                break;
            case 2:
                result = variable1 - variable2;
                printf("Result: %d\n", result);
                break;
            case 3:
                result = variable1 * variable2;
                printf("Result: %d\n", result);
                break;
            case 4:
                if (variable2 != 0) {
                    result = variable1 / variable2;
                    printf("Result: %d\n", result);
                } else {
                    printf("Cannot divide by zero.\n");
                }
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }

        printf("Do you want to re-run the operation? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    printf("Program terminated.\n");

    return 0;
}
