// Printout Mathematical Table

#include<stdio.h>
#include<stdlib.h>

 int main()
 {
    int i;
    int num;
    int count;

    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\nEnter range:");
    scanf("%d", &count);

    for ( i = 1; i <= count; i++)
    {
        printf("\n%d x %d = %d", num,i,num*i);
        
    }
    printf("\nEnd of multiplication.");
    

return 0;
 }