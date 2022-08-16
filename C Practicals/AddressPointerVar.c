#include <stdio.h>
int main()

{
    int a[5];
    int *g;

    g = a;
    a[1]=50;

    printf("Address is %x\n", 70);
    printf("Address is %p\n", a);
    printf("Address is %x\n", a + 1);
    printf("Address is %x\n", a + 2);

    return 0;
}