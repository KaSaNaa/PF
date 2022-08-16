#include<stdio.h>
#include<stdlib.h>

int main()

{
    int num;

    printf("Enter number:\n");
    scanf("%d", &num);

    if (num%2==1)
    {
        printf("%d", num*num);
    }
    else
        printf("%d", num*num*num);

        return 0;
}