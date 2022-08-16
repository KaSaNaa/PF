#include <stdio.h>
#include <stdlib.h>

int main()

{
    int code, sales, bonus;

    printf("Enter code: ");
    scanf("%d", &code);

    printf("\nEnter sales amount: ");
    scanf("%d", &sales);

    printf("Bonus is ");

    if (code == 1 && sales >= 10000)
    {
        printf("$500");
    }
    else if (code == 1 && sales < 10000)
    {
        printf("$200");
    }

    else if (code == 2 && sales >= 20000)
    {
        printf("$600");
    }
    else if (code == 2 && sales < 20000)
    {
        printf("$550");
    }

    else
        printf("$150");

    return 0;
}