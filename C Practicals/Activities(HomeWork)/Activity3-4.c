#include <stdio.h>

int main()
{

    int num1, num2, *Addr1, *Addr2;

    Addr1 = &num1;
    Addr2 = &num2;

    printf("Enter number 1: ");
    scanf("%d", Addr1);

    printf("\nEnter number 2: ");
    scanf("%d", Addr2);

    int sum = num1 + num2;

    printf("sum is %d", sum);

    return 0;
}