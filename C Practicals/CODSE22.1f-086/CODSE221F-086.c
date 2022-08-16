#include <stdio.h>
#include <stdlib.h>
char FuelType;
int UnitPriP, StartQuantP, VehicCountP;
int UnitPriD, StartQuantD, VehicCountD;
int TotLtrs, PumpdQuantP, QuantRemainP;
int PumpdQuantD, QuantRemainD;

void DailyDetails()
{
    printf("Enter Fuel Type (P/D):");
    scanf("%c", &FuelType);
    if (FuelType == 'P')
    {
        printf("___Enter Petrol related Details___\n");

        printf("Unit Price: ");
        scanf("%d", &UnitPriD);

        printf("\nStarting Quantity: ");
        scanf("%d", &StartQuantD);

        printf("\nPetrol Vehicle Count: ");
        scanf("%i", &VehicCountD);
    }
    else
        printf("!!!");
    if (FuelType == 'D')
    {
        printf("\n___Enter Diesel related details___\n");
        printf("Unit Price: ");
        scanf("%d", &UnitPriD);

        printf("Starting Quantity: ");
        scanf("%d", &StartQuantD);

        printf("Diesel Vehicle Count: ");
        scanf("%i", &VehicCountD);
    }
    else
        printf("Check that if you entered fuel type correctly!\n");
}

void Function2()
{
    printf("\nEnter Fuel Type: ");
    scanf("%c", &FuelType);
    if (FuelType == 'P')
    {
        printf("\nPumped Petrol Quantity: ");
        scanf("%i", &PumpdQuantP);
    }
    else
        printf("!!!!");
    if (FuelType == 'D')
    {
        printf("\nPumped Diesel Quantity: ");
        scanf("%i", &PumpdQuantD);
    }
    else
        printf("Check that if you entered fuel type correctly!");
    TotLtrs = PumpdQuantD + PumpdQuantP;

    
    QuantRemainD = StartQuantD - PumpdQuantD;
    QuantRemainP = StartQuantP - PumpdQuantP;
    
}

void EndOfTheDay()
{
    printf("Total Quantity Pumped:"
           "%d",
           TotLtrs);
    printf("\nRemaining Diesel Litres:"
           "%d",
           QuantRemainD);
    printf("\nRemaining Petrol Litres:"
           "%d",
           QuantRemainP);       
}
int main()
{
    DailyDetails();
    Function2();
    EndOfTheDay();

    return 0;
}