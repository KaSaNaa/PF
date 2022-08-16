// find cube of any given number using a function
#include <stdio.h>
#include <stdlib.h>
/* when you declare a function after the main function,
it's not gonna run correctly as main function doesn't know about the function i created.*/

double CubeOF(double num)
{
    double result = num * num * num;
    printf("%f\n", result);
    return result;
}
/* so i put here a prototype of my function so the
compiler can proceed to the main function knowing that there is a function i created.*/

int main()
{
    printf("Answer is %f\n", CubeOF(9.0));
    CubeOF(5.55);
    CubeOF(63.265);

    return 0;
}
