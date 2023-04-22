#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

void create(Node **head, int data) {
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL || data < (*head)->data) {
        new_node->next = *head;
        *head = new_node;
    } else {
        Node *prev = *head;
        Node *curr = (*head)->next;
        while (curr != NULL && data > curr->data) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = new_node;
        new_node->next = curr;
    }
}

void sort_list(Node **head) {
    Node *sorted_list = NULL;
    Node *curr = *head;
    Node *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        create(&sorted_list, curr->data);
        curr = next;
    }
    *head = sorted_list;
}

Node *merge_lists(Node *head1, Node *head2) {
    Node *merged_head = NULL;
    Node **temp = &merged_head;
    while (head1 != NULL && head2 != NULL) {
        if (head1->data < head2->data) {
            *temp = head1;
            head1 = head1->next;
        } else {
            *temp = head2;
            head2 = head2->next;
        }
        temp = &((*temp)->next);
    }
    if (head1 != NULL) {
        *temp = head1;
    }
    if (head2 != NULL) {
        *temp = head2;
    }
    return merged_head;
}

void print_list(Node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *merged_head;

    for (int i = 1; i <= argc / 2; i++) {
        create(&head1, atoi(argv[i]));
    }

    for (int i = (argc / 2) + 1; i < argc; i++) {
        create(&head2, atoi(argv[i]));
    }

    sort_list(&head1);
    sort_list(&head2);

    printf("List 1: ");
    print_list(head1);
    printf("List 2: ");
    print_list(head2);

    merged_head = merge_lists(head1, head2);

    printf("Merged list: ");
    print_list(merged_head);

    return 0;
}
