/* Write a C program to input marks of two subjects (Phy6 and Chem). Calculate percentage and grade according to following:*/

#include<stdio.h>

int main()

{
    int Chem, Phy, Tot, Prcntg;
    printf("Enter Physics marks:\n");
    scanf("%d", &Phy);
    printf("Enter Chemistry Marks:\n");
    scanf("%d", &Chem);

    Tot= Chem+Phy;
    Prcntg=Tot/2;

    if (Prcntg>=90)
    {
        printf("Grade A");
    }
    else if (Prcntg>=80)
    {
        printf("Grade B");
    }
    else if (Prcntg>=70)
    {
        printf("Grade C");
    }
    else if (Prcntg>=60)
    {
        printf("Grade D");
    }
    else if (Prcntg>=40)
    {
        printf("Grade E");
    }
else
    printf("Grade F");

return 0;

}