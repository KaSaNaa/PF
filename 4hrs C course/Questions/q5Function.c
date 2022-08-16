#include <stdio.h>
#include <stdlib.h>

void isEven()
{
    int num;
    printf("Enter number you want to check: ");
    scanf("%d", &num);
    num % 2 == 1 ? printf("Number is odd\n") : printf("Number is even\n");
    return;
}

void SimpleInterest()
{
    float invest, amt;
    float IntRate = 0.0568;
    printf("Enter invested amount with cents: Rs. ");
    scanf("%d", &invest);
    amt = invest * IntRate;
    printf("Interest amount is %f\n", amt);
    return;
}

void Fibonacci()
{
    int count, y;
    int m = 0, n = 1, sum = 0;
    printf("Enter limit: ");
    scanf("%d", &count);
    if (count != 0)
    {

        while (sum < count)
        {

            sum = m + n;
            printf("%d\t", sum);
            m = n;
            n = sum;
            sum = m + n;
        }
    }
    return;
}

void main()
{
    int num;
    printf("1. Check if a number is even or odd\n2. Calculate simple interest\n3. Print Fibonacci series\n**Enter 0 to exit**\n");
    scanf("%d", &num);

    while (num)
    {

        while (num == 1 || num == 2 || num == 3)
        {

            if (num == 1)
            {
                isEven();
            }
            else if (num == 2)
            {
                SimpleInterest();
            }
            else if (num == 3)
            {
                Fibonacci();
            }
        }
    }
    printf("End of program.");
    return;
}