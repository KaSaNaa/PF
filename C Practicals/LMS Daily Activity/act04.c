#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5];
    int i = 0, bill = 0, quantity = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\n\nEnter item price: Rs.");
        scanf("%d", &array[i]);
        printf("Enter number of items: ");
        scanf("%d", &quantity);
        bill = bill + array[i] * quantity;
    }
    if (bill > 10000)
    {
        int disc = bill * 0.06;
        bill = bill - disc;
        printf("\nDiscounted total: Rs. %d", bill);
    }
    else
        printf("Total: Rs. %d", bill);
    return 0;
}