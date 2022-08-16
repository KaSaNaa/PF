#include <stdio.h>
#include <stdlib.h>

struct Patients
{
    int id, vacc, age;
    char name[50];
    int count;
} p[1];

int main()
{
    int i = 0;
    int count = 0;
    // storing information
    for (i = 0; i <= 1; ++i)
    {
        p[i].count = i + 1;
        printf("\nEnter data of Patient number %d\n", p[i].count);
        printf("\tEnter ID: ");
        scanf("%d", &p[i].id);
        printf("\tEnter name: ");
        scanf("%s", p[i].name);
        printf("\tEnter vaccination status(1 for yes | 0 for no): ");
        scanf("%d", &p[i].vacc);
        printf("\tEnter age: ");
        scanf("%d", &p[i].age);
    }
    for (i=0; i <= 1; ++i)
    {
        for (p[i].age > 30 && p[i].vacc == 1; i++;)
        {
            count = count + 1;
            
        }
        
    }
    printf("Number of vaccinated patients who are over the age of thirty: %d", count);

    return 0;
}
