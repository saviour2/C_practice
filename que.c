#include <stdio.h>
#define MAX 5

int front = -1, rear = -1;
int queue[MAX];

void enqueue();
void dequeue();
void display();

int main()
{
    int choice;
    while (1)
    {
        printf("\n---Queue Operations---\n\n");
        printf("1.Enter \n2.Delete \n3.Display \n4.Exit\n\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\n\n---- PROGRAM EXITED ----\n\n");
            return 0;
        default:
            printf("\n\n!!! INVALID INPUT !!!\n\n");
        }
    }
}

void enqueue()
{
    int value;
    if (rear == MAX - 1)
        printf("\n\n!!! QUEUE OVERFLOW !!! \n\n");
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        printf("\nEnter the value to be entered in the queue : ");
        scanf("%d", &value);
        queue[rear]=value;;
        printf("\n\n%d entered in the queue\n\n", value);
    }
}
void dequeue()
{
    if (front == -1 || front > rear)
        printf("\n\n!!! QUEUE UNDERFLOW !!! \n\n");
    else
    {
        printf("\n\n%d deleted from the queue\n\n", queue[front]);
        front++;
    }
}
void display()
{
    if (front == -1 || front > rear)
        printf("\n\n!!! QUEUE IS EMPTY !!! \n\n");
    else
    {
        printf("\n\nThe queue elements are -> ");
        for (int i = front; i <= rear; i++)
            printf(" %d ", queue[i]);
        printf("\n\n");
    }
}