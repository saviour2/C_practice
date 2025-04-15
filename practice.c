#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("\n\nMemory Allocation Failed...");
        return NULL;
    }

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}

Node *insertAtBeginning(Node *head, int value)
{
    Node *newNode = createNode(value);
    if (newNode == NULL)
    {
        return head;
    }

    newNode->next = head;
    head = newNode;

    return head;
}

Node *insertAtEnd(Node *head, int value)
{
    Node *newNode = createNode(value);
    if (newNode == NULL)
    {
        return head;
    }
    if (head == NULL)
    {
        return newNode;
    }

    Node *tempHead = head;
    while (tempHead->next != NULL)
    {
        tempHead = tempHead->next;
    }

    tempHead->next = newNode;

    return head;
}

void display(Node *head)
{
    Node *tempHead = head;
    if (tempHead == NULL)
    {
        printf("\n\nEmpty list, nothing to display...\n\n");
        return;
    }

    printf("\n\nLIST ITEMS : ");
    while (tempHead != NULL)
    {
        printf(" %d", tempHead->data);
        tempHead = tempHead->next;
    }
}

Node *deleteAtBeginning( Node * head)
{
    if (head == NULL)
    {
        printf("\n\nList is empty, nothing to delete");
        return NULL;
    }

    Node *tempHead = head;
    head = head -> next;
    free(tempHead);

    return head;
    
}