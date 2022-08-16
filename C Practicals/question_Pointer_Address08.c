#include<stdio.h>

int main ()
{

    int marks=50;
    int *address=&marks;
    printf("%x\n", address);
    printf("%d", *address);

return 0;    

}