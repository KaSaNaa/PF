#include<stdio.h>
#include<stdlib.h>

void main ()
{
    char line[255];
    FILE*fpointer= fopen("employee.txt", "r");

    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    
    printf("%s", line);
}