#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char data;
    struct node* next;
} Node;

Node* newNode(char data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

Node* createLinkedList(char* str) {
    Node* head = NULL, * prev = NULL;
    for (int i = 0; i < strlen(str); i++) {
        Node* node = newNode(str[i]);
        if (prev) {
            prev->next = node;
        }
        else {
            head = node;
        }
        prev = node;
    }
    return head;
}

int compare(Node* list1, Node* list2) {
    while (list1 && list2 && list1->data == list2->data) {
        list1 = list1->next;
        list2 = list2->next;
    }
    if (list1 && list2) {
        return (list1->data > list2->data) ? 1 : -1;
    }
    else if (list1) {
        return 1;
    }
    else if (list2) {
        return -1;
    }
    else {
        return 0;
    }
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    Node* list1 = createLinkedList(str1);
    Node* list2 = createLinkedList(str2);

    int result = compare(list1, list2);
    printf("\n");
    printf("========================================\n");
    printf("             String Comparison           \n");
    printf("========================================\n\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("\n");
    if (result == 0) {
        printf("The two strings are the same.\n");
    }
    else if (result == 1) {
        printf("The first string is lexicographically greater.\n");
    }
    else {
        printf("The second string is lexicographically greater.\n");
    }
    printf("\n");
    printf("========================================\n");
    printf("\n");
    return 0;
}
