#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node with a given value
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("\n\nFAILED TO CREATE NODE");
        return NULL;
    }

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}

int main()
{
    int val;
    printf("\nEnter an Integer : ");
    scanf("%d", &val);

    // Get the created node from the function
    struct Node *head = createNode(val);

    if (head != NULL)
        printf("\n\nThe linked list : %d\n", head->data);
    else
        printf("\n\nLinked list is empty.\n");

    return 0;
}
