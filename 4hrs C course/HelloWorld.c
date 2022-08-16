#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[10];
    int age= 21;
    
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("your name is %s after specifier the line breaks!", name);


    return 0;
}