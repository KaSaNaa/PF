#include<stdio.h>

int main ()

{
    int n;

    printf("Enter marks:\n");
    scanf("%d", &n);

    if (n>0)
    {
        if (n>75)
        {
            printf("Grade is A");
        }
        else if (n>50)
        {
            printf("Grade is B");        
        }
        else
        {
            printf("Grade is S");
        }
    }        
    else
    {
        printf("Fail");
    }        
    return 0;
    

    
}