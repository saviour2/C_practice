#include <stdio.h>

int main(void)
{
    int var[10]; //Arrays are a collection of datas of same data type located in contiguous memory locations
    char name[] = "Saikat"; //Strings are arrays of character data type which ends in NULL
    char *ptr;
    ptr = name; //points to the address of the first element of the array

    printf("%c",*ptr); //dereferencing the address
    printf("%c",name[2]);

    return 0;
}