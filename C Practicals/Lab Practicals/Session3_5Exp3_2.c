#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num[10];
    int i = 0, sum = 0, avg = 0;

    printf("Enter 10 numbers:\n");

    for (i = 0; i <= 9;)
    {
        scanf("%d", &num[i]);
        sum = sum + num[i];
        avg = sum / 10;
        i++;
    }
    printf("Total is %d \n", sum);
    printf("Average is %d", avg);
    return 0;
}