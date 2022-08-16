#include<stdio.h> //header file which has the necessary information to include the input/output related functions

int main() //means that function needs to return some integer at the end of the execution

{
    char name[50], city[50], email[50]; //  allocates space for a pointer variable called name
    printf("Enter your name:");  // Displays the quoted text
    scanf("%s", &name);// Take an input from the user

 
    printf("Enter your email:"); // Displays the quoted text
    scanf("%s", &email);// Take an input from the user

    printf("Enter your city :"); // Displays the quoted text
    scanf("%s", &city, "\n"); // Take an input from the user
    printf(" \n");// Displays the quoted text

    printf("Your name is %s\n", name); // Displays the quoted text
    printf("Your email is %s\n", email); // Displays the quoted text
    printf("Your city is %s\n", city); // Displays the quoted text


    return 0;
}