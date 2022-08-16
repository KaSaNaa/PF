#include <stdio.h>

int main()

{
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);

    switch (n)
    {
    case 100: // case is used to check whether the given value is equal to the case value.
        printf("A\n");
        break; // "brake" is used to stop the execution and exit the switch if the case value is equal to the given value of the variable.
    case 60:
        printf("B\n");
        break;
    default: // "default" is used to print anything you want if all the above cases are false.
        printf("No grade"); break;
    }

    return 0;
}