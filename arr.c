#include <stdio.h>
#define MAX 10

int array[MAX], i, num, no_Elements;

int insert();
int delete();
void display();

int main()
{
    int choice;

    while (1)
    {
        printf("\n\nArray operations");
        printf("\n\n1.Insert 2.Delete 3.Display 4.Exit\n\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\n\n---- Program Exited ----\n\n");
            return 0;
        default:
            printf("\n\n---- Invalid Input, try again ----\n\n");
            break;
        }
    }
}

int insert(void)
{

    while (1)
    {
        printf("\n\nWhat is the number of elements you want to enter ( MAX 10 nos.) ");
        scanf("%d", &no_Elements);

        if (no_Elements > 10)
        {
            printf("\n\n!!! Exceeded the limit of Array !!!\n\n");
        }
        else if (no_Elements < 1)
        {
            printf("\n\n!!! Atleast 1 elements must be entered !!!\n\n");
        }
        else
        {
            for (int i = 0; i < no_Elements; i++)
            {
                printf("\nElement no. %d : ", i + 1);
                scanf("%d", &num);
                array[i] = num;
            }
            printf("\n\n%d Elements successfully entered\n", no_Elements);
            return 0;
        }
    }
}

int delete(void)
{
    int del_num, i, j, flag = 0;

    if (no_Elements == 0)
    {
        printf("\n\nArray is empty. Nothing to delete.\n\n");
        return 0;
    }

    while (1)
    {
        printf("\n\nEnter the number to be deleted : ");
        scanf("%d", &del_num);
        for (i = 0; i < no_Elements; i++)
        {
            if (del_num == array[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            for (j = i; j < no_Elements-1; j++)
            {
                array[j] = array[j + 1];
            }
            no_Elements--;
            printf("\n\nElement %d deleted successfully.\n\n", del_num);

        }
        else
            printf("\n\nElement not in the array\n\n");
        return 0;
    }
}

void display()
{
    if (no_Elements == 0)
    {
        printf("\n\nArray is empty.\n");
        return;
    }
    else
    {
        printf("\n\nElements : ");
    for (int i = 0; i < no_Elements; i++)
    {
        printf("%d ", array[i]);
    }
    }
    
}