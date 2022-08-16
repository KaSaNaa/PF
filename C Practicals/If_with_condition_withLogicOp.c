#include <stdio.h>

int main()
{
    int n;
    printf("Input number:\n");
    scanf("%d", &n);

    if (n > 0 && n < 100)
    {
        printf("Marks stored");
    }

    return 0;
}