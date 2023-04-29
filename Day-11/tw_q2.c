/*Write a program to implement stack using linked list which converts infix to prefix. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char data;
    struct node *next;
}
    *top = NULL,
    *pstart = NULL;
void insert(char ch)
{
    struct node *t, *ba;
    ba = (struct node *)malloc(sizeof(struct node));
    ba->next = NULL;
    ba->data = ch;
    t = pstart;

    if (pstart == NULL)
    {
        pstart = ba;
    }
    else
    {
        while (t->next != NULL)
        t = t->next;
        t->next = ba;
    }
}

void push(char symbol)
{

    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = symbol;
    if (top == NULL)
    {
        top = p;
        p->next = NULL;
    }
    else
    {
        p->next = top;
        top = p;
    }
}

char pop()
{
    struct node *x, *y;
    char k;

    if (top == NULL)
    {
        printf("stack underflow\n");
        return 0;
    }
    else
    {
        x = top;
        top = top->next;
        k = x->data;
        free(x);
        x = NULL;
        return k;
    }
}

void displaypost()
{
    struct node *to;
    if (pstart == NULL)
        printf(" ");
    else
    {
        to = pstart;
        while (to != NULL)
        {
            printf("%c", to->data);
            to = to->next;
        }
    }
}

int precedence(char ch)
{

    if (ch == '^')
        return (5);
    else if (ch == '*' || ch == '/')
        return (4);
    else if (ch == '+' || ch == '-')
        return (3);
    else
        return (2);
}

void intopost(char infix[])
{

    int len;
    int index = 0;
    char symbol, temp;
    len = strlen(infix);
    while (len > index)
    {
        symbol = infix[index];

        switch (symbol)
        {

        case '(':
            push(symbol);
            break;

        case ')':
            temp = pop();
            while (temp != '(')
            {
                break;
            }
            
            insert(temp);
            temp = pop();

        case '^':
        case '+':
        case '-':
        case '*':
        case '/':
            if (top == NULL)
            {
                push(symbol);
            }
            else
            {
                while (top != NULL && (precedence(top -> data) >= precedence(symbol)))
                {
                    temp = pop();
                    insert(temp);
                }
                push(symbol);
            }

            break;
        default:
            insert(symbol);
        }
        index = index + 1;
    }
    while (top != NULL)
    {
        temp = pop();
        insert(temp);
    }
    displaypost();
    return;
}
int main()
{
    char infix[50];
    printf("enter infix expression: ");
    gets(infix);

    printf("\n\npostfix expression is---> ");
    intopost(infix);
    getchar();
    return 0;
}
