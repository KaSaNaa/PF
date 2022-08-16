#include<stdio.h>
#include<stdlib.h>

int main()
{

    int n[3], num1, num2, num3;

    printf("Enter 3 numbers:");

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    n[0]= num1;
    n[1]= num2;
    n[2]= num3;

    printf("Array n[0] has %d\n", n[0]);
    printf("Array n[1] has %d\n", n[1]);
    printf("Array n[3] has %d\n", n[2]);



return 0;
}