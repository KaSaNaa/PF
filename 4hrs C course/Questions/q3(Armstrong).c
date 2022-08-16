#include <stdio.h>
#include <math.h>

int main()
{
    int num, rem, sum, count = 1;

    while (count <= 500)
    {
        num = count;
        sum = 0;
        while (num) //one variable in condition : these conditions hold if variable is non-zero
        {
            rem = num % 10;
            sum = sum + rem * rem * rem;
            num = num / 10;
        }
        if (count == sum)
        {
            printf("%d is a Armstrong number\n", count);
        }
        count++;
    }

    return 0;
}