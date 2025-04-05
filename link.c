#include <stdio.h>

int main(void)
{
    int x=10;
    int *ptr = &x;
    int pt = x;

    printf("\n1. %d",x);
    printf("\n2. %d",ptr);
    printf("\n3. %d",*ptr);
    printf("\n4. %d",&x);
}