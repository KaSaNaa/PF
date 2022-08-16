#include<stdio.h>
int main ()

{
    int x [2];
    int *g;
    g=x;
    printf("Address is %x\n", &x);
    printf("Address is %x\n", &x[0]);
    printf("Address is %x\n", &x[1]);

    printf("Address is %x\n", g);

    return 0;
}