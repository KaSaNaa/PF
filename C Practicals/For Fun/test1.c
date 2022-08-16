#include <stdio.h>
int num1, num2;

int sum(int num1, int num2)
{

    printf("%d", num1 + num2);

    return num1 + num2;
}

int main()
{
    scanf("%d", &num1);
    scanf("%d", &num2);
    sum(num1, num2);

    return 5;
}