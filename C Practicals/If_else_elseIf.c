#include <stdio.h>

int main()

{
    int n;

    printf("Input a number:\n");
    scanf("%d", &n);

    if (n > 100) // condition can be anything you want Eg: n==100, n=>100 etc.
    {
        printf("High");
    }
    else if (n == 500) // "else if" runs if the "if" is false. Then it will terminate process if "else if" os true.
    {
        printf("Average\n");
    }
    else if (n == 400)
    {
        printf("Below Average\n"); // Please note that if "else if" is true it will terminate the entire process and return the given value.
    }
    else // no condition here. "Else" runs if the "if" is false.
    
        printf("Low");
    

    return 0;
}