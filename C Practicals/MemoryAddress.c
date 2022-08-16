#include<stdio.h>
int main ()

{
    int g;
    int *y;
    g=50;
    y=&g;

    printf("Address of g is %x\n", y);
    printf("value of g is %d", *y);

    return 0;
}