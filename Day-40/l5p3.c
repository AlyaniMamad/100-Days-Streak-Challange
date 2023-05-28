/*Write a program to find out the commission earned by a salesman. Input
salesman no, salesman name, sales amount, and salesman type (P/D/H). If
salesman type=”P” then commission rate=9%, else if salesman type=”D” then
commission rate= 5%, else if salesman type=”H” than commission rate= 2%.
O/P: -
Salesman report
------------------------------------------------------------------------------------
Salesman number :-
Salesman name :-
Sales amount:-
Commission (%) :-
Commission (Rs.) :-
------------------------------------------------------------------------------------
Net amount :-
------------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){
    int sno;
    char name[30],stype;
    float s_amt;
    int comm;

    printf("\nEnter Salesman No :");
    scanf("%d",&sno);

    printf("\nEnter Name : ");
    scanf(" %[^\n]", name);

    printf("\nEnter Sales Amount : ");
    scanf("%f",&s_amt);
    try:
    printf("\nEnter Salesman Type(P/D/H): ");
    scanf(" %c",&stype);

    if(stype=='P' || stype=='p'){
        comm=9;
    }else if(stype=='D' || stype=='d'){
        comm=5;
    }else if(stype=='H' || stype=='h'){
        comm=2;
    }else{
        printf("\n---Invalid commision Type---Re enter please\n");
        goto try;
    }
    float comm_amt=s_amt*comm/100;

    float net_amt=comm_amt+s_amt;

printf("\nSalesman report");
printf("\n------------------------------------");
printf("\nSalesman number :- %d",sno);
printf("\nSalesman name :-%s",name);
printf("\nSales amount:-%.2f",s_amt);
printf("\nCommission (%) :-%d",comm);
printf("\nCommission (Rs.) :-%.2f",comm_amt);
printf("\n-------------------------------------");
printf("\nNet amount :-%.2f",net_amt);
printf("\n-------------------------------------");

    return 0;
}
