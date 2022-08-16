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
    int sum = 0;

    for (int i = 0; i < 10;)
    {
        sum = sum + array[i];
        i++;
    }

    printf("sum is %d", sum);

return 0;
}