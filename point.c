#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;

    printf("\n1. %d",x);
    printf("\n2. %d",ptr);
    printf("\n3. %d",*ptr);
    printf("\n4. %d",&x);

    *ptr = 20;

    printf("\n1. %d",x);
    printf("\n2. %d",ptr);
    printf("\n3. %d",*ptr);
    printf("\n4. %d",&x);
    
    return 0;
}