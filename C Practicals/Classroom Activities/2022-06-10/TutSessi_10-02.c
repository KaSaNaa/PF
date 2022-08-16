/* Child-5% Young-9% Senior-13%   Implement a C program to find the annual interest amount according to the account type*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float balance;
    char AccType;

    printf("Enter account type:\n c for child\n y for young\n s for senior\n");
    scanf("%c", &AccType);

    printf("Enter Account Balance:\n");
    scanf("%f", &balance);

    if (AccType == 's')
    {
        printf("Annual interest amount: %f\a", balance * 0.13);
    }
    else if (AccType == 'c')
    {
        printf("Annual interest amount: %f", balance * 0.05);
    }
    else if (AccType == 'y')
    {
        printf("Annual interest amount: %f", balance * 0.09);
    }
    else
        printf("Wrong Account type entered! PLease run the program again.");

    return 0;
}