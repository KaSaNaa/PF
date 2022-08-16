//Find the factrorial value of any given number

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum=0;

    printf("Enter a number to find factorial value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Factorial value of %d is %d", n, sum);
    return 0;
}