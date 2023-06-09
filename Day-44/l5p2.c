/*An electric power distribution company charges its domestic consumers as
follows:
Consumption Units Rate of Charge
1-100 Rs. 0.75 per unit
101-300 Rs. 75 plus Rs. 1.00 per unit excess of 100
301-500 Rs. 275 plus Rs. 1.50 per unit excess of 300
500 above Rs. 575 plus Rs. 1.75 per unit excess of 500
Write a program that reads customer number & power consumed and print the
amount to be paid by the customer. Note that output should be well formatted
with meaningful calculation displayed as invoice.*/

#include <stdio.h>

int main()
{
    int customerNumber;
    int powerConsumed;
    double amountToBePaid = 0.0;

    printf("Enter customer number: ");
    scanf("%d", &customerNumber);

    printf("Enter power consumed (in units): ");
    scanf("%d", &powerConsumed);

    printf("\n==============================\n");
    printf("      Electric Bill Invoice\n");
    printf("==============================\n");
    printf("Customer Number: %d\n", customerNumber);
    printf("Power Consumed: %d units\n", powerConsumed);
    printf("==============================\n");

    if (powerConsumed >= 1 && powerConsumed <= 100)
    {
        amountToBePaid = powerConsumed * 0.75;
    }
    else if (powerConsumed >= 101 && powerConsumed <= 300)
    {
        amountToBePaid = 75 + (powerConsumed - 100) * 1.00;
    }
    else if (powerConsumed >= 301 && powerConsumed <= 500)
    {
        amountToBePaid = 275 + (powerConsumed - 300) * 1.50;
    }
    else if (powerConsumed > 500)
    {
        amountToBePaid = 575 + (powerConsumed - 500) * 1.75;
    }else{
        printf("\nInvalid Input");
    }

    printf("Amount to be Paid: Rs. %.2f\n", amountToBePaid);
    printf("==============================\n");

    return 0;
}
