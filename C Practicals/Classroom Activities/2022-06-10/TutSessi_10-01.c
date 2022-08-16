/*Write a program to check the entered letter is a lowercase or a uppercase*/

#include <stdio.h>

int main()
{
    char c;
    printf("Enter a Letter:\n");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("Uppercase");
    }
    else if ( c >= 'a' && c<= 'z')
    {
        printf("Lowercase");
    }
    else
        printf("Not a letter!");
        

    return 0;
}