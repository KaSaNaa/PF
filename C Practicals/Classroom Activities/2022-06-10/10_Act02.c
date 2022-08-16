#include <stdio.h>

int main()

{
    float amount, compprof, perProf;

    printf("Enter invested amount (in Millions):\n");
    scanf("%f", &amount);

    if (amount >= 10)
    {
        compprof = amount * 0.08;
    }
    else if (amount >= 6)
    {
        compprof = amount * 0.05;
    }
    else
        compprof = amount * 0.02;
    perProf = compprof;
    printf("You've received Rs. %f Millions. ", perProf);
    return 0;
}