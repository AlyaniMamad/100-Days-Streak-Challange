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

int main(){

    int cno,pc;
    float rate;

    printf("\nEnter Customer Number : ");
    scanf("%d",&cno);

    printf("\nEnter Power Consumed : ");
    scanf("%d",&pc);

    if(pc>=0 && pc<=100){
        rate=.75*pc;
    }else if(pc>=101 && pc<300){
         rate=1*pc;   
    }

    return 0;
}