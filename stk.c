#include <stdio.h>
#define MAX 5

int array[MAX], top = -1;

void push();
void pop();
void display();
void peek();

int main()
{
    int choice;

    while (1)
    {
        printf("\n-----------------------------------------");
        printf("\n\n------ [ STACK OPERATIONS ] ------");
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit");

        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            printf("\n\n------ [ PROGRAM EXITING ] ------");
            return 0;
        default:
            printf("\n\n------ [ !!!! INVALID INPUT, TRY AGAIN !!!! ] ------");
            break;
        }
    }
}

void push()
{
    int value;
    
    if (top == MAX - 1)
    {
        printf("\n\n------- [ !!!! STACK OVERFLOW, TRY SOMETHING ELSE !!!! ] ------\n\n");
        return;
    }

    printf("\n\nEnter the value to be pushed -> ");
    scanf("%d", &value);

    array[++top] = value;

    printf("\n\n[ \"%d\" Entered into the stack ]\n\n",value);
    
}

void pop()
{
    if (top == -1)
    {
        printf("\n\n------- [ !!!! STACK UNDERFLOW, TRY SOMETHING ELSE !!!! ] ------\n\n");
        return;
    }
    printf("\n\n[ \"%d\" Popped from the stack ]",array[top--]);
}

void display()
{
    if (top == -1)
    {
        printf("\n\n------- [ !!!! STACK EMPTY, NOTHING TO DISPLAY !!!! ] ------\n\n");
        return;
    }
    
    printf("\n\n------- [ STACK ELEMENTS ] ------\n\n");
    for (int i = top; i >= 0; i--)
    {
       printf("\nElement [%d] : %d ",i,array[i]);
    }
    printf("\n\n");
}

void peek()
{
    if (top == -1)
    {
        printf("\n\n------- [ !!!! STACK EMPTY, NOTHING TO DISPLAY !!!! ] ------\n\n");
        return;
    }
    printf("\n\n[ Top element on the stack :  %d ]\n\n",array[top]);
}