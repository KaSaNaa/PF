#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did fine!");
        break;
    case 'C':
        printf("You did poorly!");
        break;
    case 'F':
        printf("You are failed!");
        break;

    default:
        printf("Invalid grade input!!!");

        break;
    }
    return 0;
}