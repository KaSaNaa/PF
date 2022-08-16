/*Converting kilometers to meters*/
#include<stdio.h>
int main()

{
    float kilometers= 10.57625;
    float meters = 0;

    meters=kilometers*1000;

    /*Printing value stored in meters %.2f print as floating point, 2 digits after decimal point*/

    printf("10.5 km in meters :%2f\n", meters);

   return 0;
 

}