#include <stdio.h>

int main()

{
    int marks;

    printf("Enter  marks: \n");
    scanf("%i", &marks);

    if (marks >= 60)
    {
        printf("You Passed");
    }
    else
        printf("You Failed");

    return 0;
}