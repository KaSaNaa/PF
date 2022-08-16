#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num;

    printf("Enter number:");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Positive");
    }

    else if (num < 0)
    {
        printf("Negative");
    }
    else
        printf("Equal to 0");

    printf("\nTo try another number, run this program again.");

    return 0;
}
