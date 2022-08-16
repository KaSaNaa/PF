#include<stdio.h> //exit control loop
int main ()
{
    int counter=1;
    do
    {
        printf("hello\n");
        counter++;
    } while (counter<4);
    
    return 0;
}