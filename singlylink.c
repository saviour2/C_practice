#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* link;
}Node;

Node *createList(Node *start);
void display(Node *start);
void count(Node *start);
void search(Node *start);
Node *addatbeg(Node *start);
Node *addatend(Node *start);
Node *addafter(Node *start);
Node *addbefore(Node *start);
Node *addatpos(Node *start);
Node *del(Node *start);
Node *reverse(Node *start);

int main(void)
{

    Node *start = NULL;
    int choice, data, item, pos;

    while(1)
    {
        printf("\n----------------------------------------");
        printf("\n\n ---- [ LINKED LIST ] ----");

        printf("\n\n1.Create List");
        printf("\n2.Display");
        printf("\n3.Count");
        printf("\n4.Search");
        printf("\n5.Add at beginning");
        printf("\n6.Add at end");
        printf("\n7.Add after node");
        printf("\n8.Add before node");
        printf("\n9.Add at position");
        printf("\n10.Delete");
        printf("\n11.Reverse");
        printf("\n12.Quit");

        printf("\n\nEnter your choice -> ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 :
                break;
            case 2 :
                break;
            case 3 :
                break;
            case 4 :
                break;
            case 5 :
                break;
            case 6 :
                break;
            case 7 :
                break;
            case 8 :
                break;
            case 9 :
                break;
            case 10 :
                break;
            case 11 :
                break;
            case 12 :
                break;
            default :
                break;
        }
    }
}

