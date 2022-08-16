#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int guesscount = 0;
    int guessLimit = 3;
    int OutOfGuesses = 0;

    while (guess != secretNumber && OutOfGuesses == 0)
    {
        if (guesscount < guessLimit)
        {
            printf("enter a number: ");
            scanf("%d", &guess);
            guesscount++;
        }
        else
        {
            OutOfGuesses == 1;
        }
    }
    if (OutOfGuesses == 1)
    {
        printf("Out of guesses.");
    }
    else
        printf("Hey you win!");
    return 0;
}