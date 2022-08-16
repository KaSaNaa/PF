#include <stdio.h>
int main()
{
    int i, l, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        for (l = 1; l <= i; ++l)
        {
            printf("* ");
        }
        printf("\n");
    }
    getchar();
    return 0;
}
