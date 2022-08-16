/* Write a C program to check angles of a triangle if it is valid or not*/

#include <stdio.h>

int main()

{
    int a1, a2, a3, sum;

    printf("Enter the size of 1st angle:\n");
    scanf("%d", &a1);
    printf("Enter the size of 2nd angle:\n");
    scanf("%d", &a2);
    printf("Enter the size of 3rd angle:\n");
    scanf("%d", &a3);

    sum = a1 + a2 + a3;

    if (sum == 180)
    {
        printf("It's a triangle.");
    }
    else
        printf("It isn't a triangle.");
    return 0;
}