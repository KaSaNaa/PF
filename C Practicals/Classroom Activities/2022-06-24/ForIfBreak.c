#include <stdio.h>

int main()
{
    int count;
    for (count = 0; count < 10; count++)
    {
        if (count == 6)
        {
            break; // breaks the loop and skips out of the loop, then proceeds to the next line.
        }
        printf("counter is  %d\n", count);
    }

    return 0;
}