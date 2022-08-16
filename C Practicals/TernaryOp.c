#include<stdio.h>

int main()

{
    int x, y;
    printf("input y value:\n");
    scanf("%d", &y);

    x = (y == 50) ? 60 : 40; // this means "assign 60 to x if y equals 50. if not assign 40 to x".
    printf("answer is %d", x);

    return 0;
}