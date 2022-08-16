#include<stdio.h>
int main ()
{ int num;

    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num==1)
        printf("%d is equal to 1 ", num);

    else
        printf("%d is not equal to 1 ", num);

return 0;        
}