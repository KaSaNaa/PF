#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num[3][2] = {
        {3, 2},
        {5, 4},
        {6, 5}};
    printf("%d\n", num[2][0]);
    printf("%d\n", num[1][1]);
    printf("%d\n", num[2][1]);

    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", num[i][j]);
        }
        printf("\n");
    }
}