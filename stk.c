#include <stdio.h>
#define MAX 5

int stack[MAX],top=-1;

void push();
void pop();
void display();

int main()
{
    int choice;
     
    while(1)
        {
            printf("\n\n ---- Stack Operations ---- ");
            printf("\n\n1.Push 2.Pop 3.Display 4.Exit");
            printf("\n\nEnter your choice : ");
            scanf("%d",&choice);

            switch(choice)
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
                        printf("\n\n---- Program Exited ----\n\n");
                        return 0;
                    default:
                        printf("\n\n!!!! Invalid Input, Try again !!!!\n\n");
                        break;
                }
        }
}

void push()
{
    int element;

    if(top==MAX-1)
        printf("\n\n!!! Stack Overflow !!!\n\n");
    else
        {
            printf("\n\nEnter the element : ");
        scanf("%d",&element);
        top++;
        stack[top]=element;
        printf("\n\nElement pushed in the stack -> %d\n",element);
        }
        
}

void pop()
{
    if(top == -1)
        printf("\n\n!!! Stack Underflow !!!\n\n");
    else
        printf("\n\n%d popped from the stack\n",stack[top--]);
}

void display()
{
    if(top == -1)
        printf("\n\n!!! Stack is Empty, there is nothing to display !!!\n\n");
    else   
        {
            printf("\n\nStack elements : ");
            for (int i = top; i >= 0; i--)
            {
                printf("%d\n",stack[i]);
            }
            printf("\n\n");
        }  
        
}