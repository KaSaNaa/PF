#include <stdio.h>

int main()

{
    char s;
    printf("Input your character:\n");
    scanf("%c", &s);

    switch (s)
    {
    case 'a': //if you want to print "Apple" if user entered a lowerCase or UpperCase you can use a "case"  without a break.   
    case 'A':
        printf("Apple");
        break;

    case '#':
        printf("Hash");
        break;

    default:
        printf("No match");
        break;
    }
    return 0;
}