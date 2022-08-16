#include<stdio.h>
#include<stdlib.h>

int main ()

{
    int marx;

    printf("Enter Marks:\n");
    scanf("%d", &marx);

    printf("\nGrade is ");

    if (marx<40)
    {
        printf("F");
    }
    else if (marx<55)
    {
        printf("C");
    }
    else if (marx<70)
    {
        printf("B");
    }
    else if (marx<80)
    {
        printf("A");
    }
    else
    printf("A+");

    return 0;
}