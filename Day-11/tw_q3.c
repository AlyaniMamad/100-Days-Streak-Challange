/*Write a Program to Reverse a Linked List in groups of given size
Given a linked list, write a function to reverse every k node (where k is an input to the
function).
Example:
Input: 1->2->3->4->5->6->7->8->NULL, K = 3
Output: 3->2->1->6->5->4->8->7->NULL
Input: 1->2->3->4->5->6->7->8->NULL, K = 5
Output: 5->4->3->2->1->8->7->6->NULL ] */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* reverseGroup(struct Node* head, int k) {
    struct Node* current = head;
    struct Node* next = NULL;
    struct Node* prev = NULL;
    int count = 0;
    
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    
    if (next != NULL) {
        head->next = reverseGroup(next, k);
    }
    
    return prev;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

int main() {
    int k = 3;
    struct Node* head = NULL;
    insert(&head, 8);
    insert(&head, 7);
    insert(&head, 6);
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);
    
    printf("\nOriginal Linked List: ");
    printList(head);
    
    head = reverseGroup(head, k);

    printf("K = %d\n",k);
    
    printf("Reversed Linked List: ");
    printList(head);
    printf("\n");
    
    return 0;
}
