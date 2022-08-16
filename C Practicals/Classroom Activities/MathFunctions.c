// Functions have 2 types.
//  1. Predefined Functions
//  2. User Defined Functions

#include <stdio.h>
#include <math.h>
int main()

{
    printf("%.2f\n", pow(2, 7));   // displays the 7th power of 2 with two decimal points. which is 128.00
    printf("%.2f\n", ceil(-9.2));  // rounds x to the smallest integer not less than x
    printf("%.2f\n", floor(-9.2)); // rounds x to the largest integer not greater than x
    printf("%.2f\n", sqrt(900));   // finds the square root of given value.

    return 0;
}