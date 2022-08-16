#include <stdio.h>

int main()

{
    int usrnm, pswd;

    printf("Enter username:\n");
    scanf("%d", &usrnm);
    printf("Enter Password:\n");
    scanf("%d", &pswd);

    switch (usrnm)
    {
    case 123:
        break;
    }
    switch (pswd)
    {
    case 123:
        printf("You have successfully logged in as an Admin.");
        break;

    default:
        printf("Incorrect username and password!");
        break;
    }

    return 0;
}