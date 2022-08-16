/*Write a program that asks user to enter two numbers, obtain the two numbers from the user, and print the sum, product, dfifference, quotient, and modulus of the two numbers.*/
#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int num1, num2, sum;
    float Modulus, Quotient;

    printf("Enter number 1:");
    scanf("%d", &num1);
    printf("Enter number 2:");
    scanf("%d", &num2);
    Modulus = num1 % num2;
    Quotient = num1 / num2;

    printf("sum is %d\n", num1 + num2);
    printf("Product is %d\n", num1 * num2);
    printf("Differnece is %d\n", num1 - num2);
    printf("Quotient is %f\n", Quotient);
    printf("Modulus is %f\n", Modulus);
    
    return 0;
}