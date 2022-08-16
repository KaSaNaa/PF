#include <stdio.h>

int main()
{
    int array[10];

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10;)
    {
        scanf("%d", &array[i]);
        i++;
    }
    printf("\nYou entered:\n");
    for (int i = 0; i < 10;)
    {
        printf("%d\t", array[i]);
        i++;
    }

    return 0;
}