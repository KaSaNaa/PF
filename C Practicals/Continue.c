#include <stdio.h>

int main()
{
    int count;
    for (count = 0; count < 10; count++)
    {
        if (count == 6)
        {
            continue; // skips the mentioned condition level and proceeds to next round. doesn't exit the loop.
        }
        printf("counter is  %d\n", count);
    }

    return 0;
}