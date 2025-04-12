#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

Node *createNode( int value )
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL)
        {
            printf("\n\nMemory Allocation Failed... terminating");
            return NULL;
        }
    
    newNode -> data = value;
    newNode -> next = NULL;

    return newNode;
}

Node *insertAtBeginning(Node *head, int value)
{
    Node *newNode = createNode(value);
    if(newNode == NULL)
        {
            return head;
        }

    newNode -> next = head;
    head = newNode;

    return head;
}

Node *insertAtEnd( Node *head, int value)
{
    Node *newNode = createNode(value);
    
    if( newNode == NULL )
        return head;

    if( head == NULL )
        return newNode;

    Node *temp = head;
    while( temp -> next != NULL)
        temp = temp -> next;

    temp -> next = newNode;

    return head;
}