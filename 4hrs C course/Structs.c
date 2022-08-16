#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    char batch[4];
    int age;
    double gpa;
};

int main()
{
    struct Student DSE221_086;
    DSE221_086.age = 21;
    DSE221_086.gpa = 4.3;
    strcpy(DSE221_086.name, "Pasindu");
    strcpy(DSE221_086.batch, "DSE");

    struct Student DSE221_085;
    DSE221_085.age = 23;
    DSE221_085.gpa = 3.5;
    strcpy(DSE221_085.name, "Akash");
    strcpy(DSE221_085.batch, "DSE");

    printf("%s\n", DSE221_086.name);
    printf("%lf\n", DSE221_086.gpa);
    printf("%d\n", DSE221_086.age);
    printf("%s\n", DSE221_086.batch);

    printf("%s\n", DSE221_085.name);
    printf("%lf\n", DSE221_085.gpa);
    printf("%d\n", DSE221_085.age);
    printf("%s\n", DSE221_085.batch);

    return 0;
}