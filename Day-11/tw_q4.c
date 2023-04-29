

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    int cust_id;
    char name[30];
    long int phone_number;
    struct Node *next;
};

typedef struct Node Node;

Node *insertFromFirst(Node *head, int id, char name[], long int phone_num)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->cust_id = id;
    strcpy(newNode->name, name);
    newNode->phone_number = phone_num;
    newNode->next = head;
    if (head == NULL)
    {
        newNode->next = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return newNode;
}

struct Node *insertFromLast(Node *head, int id, char name[], long int phone_num)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->cust_id = id;
    strcpy(newNode->name, name);
    newNode->phone_number = phone_num;
    newNode->next = head;
    if (head == NULL)
    {
        newNode->next = newNode;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

struct Node *insertAtPosition(Node *head, int id, char name[], long int phone_num, int pos)
{
    if (pos == 1)
    {
        return insertFromFirst(head, id, name, phone_num);
    }
    else
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->cust_id = id;
        strcpy(newNode->name, name);
        newNode->phone_number = phone_num;
        Node *temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        return head;
    }
}

Node *deleteFromFirst(Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }
    if (head->next == head)
    {
        head = NULL;
        free(head);
        return NULL;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = head->next;
    Node *toDelete = head;
    head = head->next;
    free(toDelete);
    return head;
}

Node *deleteFromLast(Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }
    if (head->next == head)
    {
        head = NULL;
        free(head);
        return NULL;
    }
    Node *temp = head;
    while (temp->next->next != head)
    {
        temp = temp->next;
    }
    Node *toDelete = temp->next;
    temp->next = head;
    free(toDelete);
    return head;
}

Node *deleteFromPosition(Node *head, int pos)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }
    if (pos == 1)
    {
        return deleteFromFirst(head);
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        if (temp->next == head)
        {
            printf("Invalid position\n");
            return head;
        }
        Node *toDelete = temp->next;
        temp->next = toDelete->next;
        free(toDelete);
        return head;
    }
}

void displaySorted(Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    Node *i, *j;
    int temp_cust_id;
    char temp_name[30];
    long int temp_phone_num;
    for (i = head; i->next != head; i = i->next)
    {
        for (j = i->next; j != head; j = j->next)
        {
            if (strcmp(i->name, j->name) > 0)
            {
                temp_cust_id = i->cust_id;
                i->cust_id = j->cust_id;
                j->cust_id = temp_cust_id;
                strcpy(temp_name, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, temp_name);
                temp_phone_num = i->phone_number;
                i->phone_number = j->phone_number;
                j->phone_number = temp_phone_num;
            }
        }
    }
    printf("ID\tName\t\t\tPhone Number\n");
    printf("-----------------------------------------\n");
    Node* temp = head;
    do
    {
        printf("%d\t%-20s%ld\n", temp->cust_id, temp->name, temp->phone_number);
        temp = temp->next;
    } while (temp != head);
}

void searchByName(Node *head, char name[])
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    Node *temp = head;
    int found = 0;
    do
    {
        if (strcmp(temp->name, name) == 0)
        {
            printf("ID: %d, Phone Number: %ld\n", temp->cust_id, temp->phone_number);
            found = 1;
        }
        temp = temp->next;
    } while (temp != head);
    if (!found)
    {
        printf("No record found for the name %s\n", name);
    }
}

void searchById(Node *head, int id)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    Node *temp = head;
    int found = 0;
    do
    {
        if (temp->cust_id == id)
        {
            printf("Name: %s, Phone Number: %ld\n", temp->name, temp->phone_number);
            found = 1;
        }
        temp = temp->next;
    } while (temp != head);
    if (!found)
    {
        printf("No record found for the ID %d\n", id);
    }
}

void searchByPhoneNumber(Node *head, long int phone_num)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    Node *temp = head;
    int found = 0;
    do
    {
        if (temp->phone_number == phone_num)
        {
            printf("ID: %d, Name: %s\n", temp->cust_id, temp->name);
            found = 1;
        }
        temp = temp->next;
    } while (temp != head);
    if (!found)
    {
        printf("No record found for the phone number %ld\n", phone_num);
    }
}

Node *deleteByName(Node *head, char name[])
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }
    Node *curr = head;
    Node *prev = NULL;
    int found = 0;
    do
    {
        if (strcmp(curr->name, name) == 0)
        {
            if (prev == NULL)
            {
                head = curr->next;
                free(curr);
                curr = head;
            }
            else
            {
                prev->next = curr->next;
                free(curr);
                curr = prev->next;
            }
            found = 1;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    } while (curr != head);
    if (!found)
    {
        printf("No record found for the name %s\n", name);
    }
    return head;
}

Node *deleteById(Node *head, int id)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }
    Node *curr = head;
    Node *prev = NULL;
    int found = 0;
    do
    {
        if (curr->cust_id == id)
        {
            if (prev == NULL)
            {
                head = curr->next;
                free(curr);
                curr = head;
            }
            else
            {
                prev->next = curr->next;
                free(curr);
                curr = prev->next;
            }
            found = 1;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    } while (curr != head);
    if (!found)
    {
        printf("No record found for the ID %d\n", id);
    }
    return head;
}

Node *deleteByPhoneNumber(Node *head, long int phone_num)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }
    Node *curr = head;
    Node *prev = NULL;
    int found = 0;
    do
    {
        if (curr->phone_number == phone_num)
        {
            if (prev == NULL)
            {
                head = curr->next;
                free(curr);
                curr = head;
            }
            else
            {
                prev->next = curr->next;
                free(curr);
                curr = prev->next;
            }
            found = 1;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    } while (curr != head);
    if (!found)
    {
        printf("No record found for the phone number %ld\n", phone_num);
    }
    return head;
}

int main()
{
    Node *head = NULL;
    int choice, id, pos;
    char name[30];
    long int phone_num;
    do
    {
        printf("\n");
        printf("1. Insert from first\n");
        printf("2. Insert from last\n");
        printf("3. Insert at specific position\n");
        printf("4. Delete from specific position\n");
        printf("5. Delete from first\n");
        printf("6. Delete from last\n");
        printf("7. Display in sorted order\n");
        printf("8. Search by name\n");
        printf("9. Search by ID\n");
        printf("10. Search by phone number\n");
        printf("11. Delete by name\n");
        printf("12. Delete by ID\n");
        printf("13. Delete by phone number\n");
        printf("14. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter customer ID: ");
            scanf("%d", &id);
            printf("Enter name: ");
            scanf("%s", name);
            printf("Enter phone number: ");
            scanf("%ld", &phone_num);
            head = insertFirst(head, id, name, phone_num);
            printf("Record added successfully\n");
            break;
        case 2:
            printf("Enter customer ID: ");
            scanf("%d", &id);
            printf("Enter name: ");
            scanf("%s", name);
            printf("Enter phone number: ");
            scanf("%ld", &phone_num);
            head = insertLast(head, id, name, phone_num);
            printf("Record added successfully\n");
            break;
        case 3:
            printf("Enter customer ID: ");
            scanf("%d", &id);
            printf("Enter name: ");
            scanf("%s", name);
            printf("Enter phone number: ");
            scanf("%ld", &phone_num);
            printf("Enter position: ");
            scanf("%d", &pos);
            head = insertAtPosition(head, id, name, phone_num, pos);
            printf("Record added successfully\n");
            break;
        case 4:
            printf("Enter position: ");
            scanf("%d", &pos);
            head = deleteAtPosition(head, pos);
            printf("Record deleted successfully\n");
            break;
        case 5:
            head = deleteFirst(head);
            printf("Record deleted successfully\n");
            break;
        case 6:
            head = deleteLast(head);
            printf("Record deleted successfully\n");
            break;
        case 7:
            displaySorted(head);
            break;
        case 8:
            printf("Enter name to search: ");
            scanf("%s", name);
            searchByName(head, name);
            break;
        case 9:
            printf("Enter ID to search: ");
            scanf("%d", &id);
            searchById(head, id);
            break;
        case 10:
            printf("Enter phone number to search: ");
            scanf("%ld", &phone_num);
            searchByPhoneNumber(head, phone_num);
            break;
        case 11:
            printf("Enter name to delete: ");
            scanf("%s", name);
            head = deleteByName(head, name);
            printf("Record deleted successfully\n");
            break;
        case 12:
            printf("Enter ID to delete: ");
            scanf("%d", &id);
            head = deleteById(head, id);
            printf("Record deleted successfully\n");
            break;
        case 13:
            printf("Enter phone number to delete: ");
            scanf("%ld", &phone_num);
            head = deleteByPhoneNumber(head, phone_num);
            printf("Record deleted successfully\n");
            break;
        case 14:
            printf("Exiting program\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 14);
    return 0;
}