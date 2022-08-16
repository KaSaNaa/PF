#include<stdio.h>
int main ()
{
    int x;
    int *t;

    t=&x;

    printf("Address of x is %x\n", &x);
    printf("Address of x is %x\n", t);

    return 0;
}