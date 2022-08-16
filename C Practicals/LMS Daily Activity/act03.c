#include <stdio.h>
#include <stdlib.h>

int main()

{
    int bill, dis;

    printf("Enter bill amount: Rs. ");
    scanf("%d", &bill);

    printf("Discount amount: Rs. ");

    if (bill > 30000)
    {
        dis = bill * 0.08;
        printf("%d", dis);
    }
    else if (bill > 25000)
    {
        dis = bill * 0.05;
        printf("%d", dis);
    }
    else if (bill > 15000)
    {
        dis = bill * 0.03;
        printf("%d", dis);
    }
    else
        printf(" No discount.");
    printf("\nTotal Bill: Rs. %d", bill - dis);

    return 0;
}