// Fibonacci Series
#include <stdio.h>

int main()
{
    int m = 0, n = 1, sum, count;

    printf("Enter limit of series: ");
    scanf("%d", &count);
    sum = m + n;

    while (sum < count)
    {
        printf("%d\t", sum);
        sum = m + n;
        m = n;
        n = sum;
    }

    return 0;
}