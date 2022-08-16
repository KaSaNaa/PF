#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age)
{
    printf("Hello %s You are %d years old.\n", name, age);
}

int main()
{ 
    sayHi("Mike", 23);
    sayHi("Lakshi", 17);
    sayHi("Pasi", 21);

    return 0;
}

