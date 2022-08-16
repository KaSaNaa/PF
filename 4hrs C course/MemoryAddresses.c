#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("%p\n", pAge);  // displays memory address of age variable
    printf("%d\n", *pAge); // dereferences the pointer variable
    printf("%d", *&age);
    return 0;
}