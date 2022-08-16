#include <stdio.h>

int main()
{

    int MyArr[5];
    int *g;

    for (int i = 0; i < 5;)
    {
        g = &MyArr[i];

        printf("Address of array %d is ", i);
        printf("%x\n", g);
        i++;
    }

    return 0;
}