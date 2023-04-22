#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
}Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insNode(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void Display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void delDup(Node* head) {
    Node* first = head;
    while (first != NULL) {
        Node* second = first;
        while (second->next != NULL) {
            if (first->data == second->next->data) {
                Node* temp = second->next;
                second->next = second->next->next;
                free(temp);
            } else {
                second = second->next;
            }
        }
        first = first->next;
    }
}

int main() {
    Node* head = NULL;
    insNode(&head, 4);
    insNode(&head, 7);
    insNode(&head, 9);
    insNode(&head, 11);
    insNode(&head, 9);
    insNode(&head, 4);
    printf("Original Linked List: ");
    Display(head);
    delDup(head);
    printf("Linked List after removing duplicates: ");
    Display(head);
    return 0;
}
