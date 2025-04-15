#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node; //Node can be used instead of struct Node

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
} //Creates a fresh Node, not connected to any entity

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
} //Inserts the created node to the beginning and repositions head to point to it (newNode)

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
} //Inserts the created node to the end of the list after traversing the entire thing

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
} //Displays the list elements by traversing it 

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
    
} // deletes the first element of the list