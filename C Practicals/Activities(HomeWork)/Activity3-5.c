#include<stdio.h>

int main()
{
    int num1, num2;
    int *ptr;
    ptr = &num1;

    printf("Enter number 1:\n");
    scanf("%d", ptr);

    printf("Enter number 2:\n");
    scanf("%d", &num2);

  if (num1 > num2){
        printf("%d is Largest Number.", num1);
    }
    else if (num2 > num1){
        printf("%d is Largest Number.", num2);
    }
    else{
        printf("Both numbers are equal.");
    }
    

    

    return 0;
}