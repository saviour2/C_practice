#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int);
Node *insertAtBeginning(Node *,int);

int main()
{
    int value;
    printf("Enter value to create a node: ");
    scanf("%d", &value);

    Node *head = createNode(value);

    if (head != NULL)
    {
        printf("Node created successfully!\n");
        printf("Data: %d\n", head->data);
        printf("Next: %p\n", (void *)head->next);
    }
    else
    {
        printf("Failed to create node.\n");
    }

    // Always free memory when you're done
    free(head);

    return 0;
}

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("\n\n[ !!! Memory Allocation Failed !!! ]\n");
        return NULL; 
    }

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}

Node *insertAtBeginning(Node *head,int value)
{
    Node *newNode = createNode(value);
    if(newNode == NULL)
        return head;

    newNode -> next = head;
    head = newNode;

    return head;
}