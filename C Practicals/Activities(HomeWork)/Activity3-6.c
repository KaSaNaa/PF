#include <stdio.h>
int main()
{
    int Array[5], n;

    printf("Enter Array size:");
    scanf("%d", &n);

    printf("\nEnter Array elements:\n");
    for (int i = 0; i < n; ++i)
        scanf("%d", Array + i);

    printf("\nYou entered: \n");

    for (int i = 0; i < n; ++i)
        printf("%d\n", *(Array + i));

    return 0;
}