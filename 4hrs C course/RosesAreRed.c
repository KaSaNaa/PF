#include<stdio.h>
#include<stdlib.h>
int main()
{
   char color[20];
   char pluralNoun[20];
   char name [20];

   printf("Enter Color: ");
   scanf("%s", color);
   printf("\nEnter Plural Noun: ");
   scanf("%s", pluralNoun );
   printf("\nEnter name: ");
   scanf("%s", name);

   printf("\nRoses are %s", color);
   printf("\n%s are blue.\n", pluralNoun);
   printf("I love %s", name);


    return 0;
}