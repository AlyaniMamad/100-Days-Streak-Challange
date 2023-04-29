#include <stdio.h>
#include <stdlib.h>

// Structure to hold node information
struct node {
    int data;
    int priority;
    struct node *next;
};

// Function to create a new node
struct node *newNode(int data, int priority) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->priority = priority;
    temp->next = NULL;
    return temp;
}

// Function to insert a new node into the priority queue
void push(struct node **head, int data, int priority) {
    struct node *start = (*head);
    struct node *temp = newNode(data, priority);
    if ((*head)->priority > priority) {
        temp->next = *head;
        (*head) = temp;
    } else {
        while (start->next != NULL && start->next->priority <= priority) {
            start = start->next;
        }
        temp->next = start->next;
        start->next = temp;
    }
}

// Function to remove the highest priority node from the queue
void pop(struct node **head) {
    if ((*head) == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    struct node *temp = *head;
    (*head) = (*head)->next;
    free(temp);
}

// Function to display the priority queue
void display(struct node **head) {
    if ((*head) == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    struct node *temp = *head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function to test the priority queue
int main() {
    struct node *head = newNode(5, 2);
    push(&head, 6, 1);
    push(&head, 7, 3);
    push(&head, 4, 4);
    push(&head, 8, 0);
    printf("Queue: ");
    display(&head);
    pop(&head);
    printf("Queue after removing highest priority node: ");
    display(&head);
    return 0;
}
