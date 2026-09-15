#include <stdio.h>
int main()
{
    char category;
    char type;
    float bag;
    char doc;
    int age;      
    int version;   
    int pr = 0;    
    
    printf("Select your Category (A/S/C): ");
    scanf(" %c" , &category);
    printf("Domestic or International(D/I): ");
    scanf(" %c" , &type);
    printf("Enter passenger age: ");
    scanf("%d", &age);
    printf("Enter bag weight: ");
    scanf(" %f" , &bag);
    printf("Show Documents (Y/N): ");
    scanf(" %c" , &doc);

    
    switch(category)
    {
        case 'A': // Adult
        switch(type)
        {
            case 'D':
            if (doc != 'Y') { printf("Invalid Documents-Boarding Denied\n"); }
            else if (bag <= 20) { printf("Baggage weight is eligible\nYou may proceed\n"); }
            else { printf("Kindly Move to enhanced Baggage screening\n"); }
            break;

            case 'I':
            if (doc != 'Y') { printf("Invalid Documents-Boarding Denied\n"); }
            else if (bag <= 30) { printf("Baggage weight is eligible\nYou may proceed\n"); }
            else { printf("Kindly Move to enhanced Baggage screening\n"); }
            break;
        }
        break;

        case 'S': // Student
        switch(type)
        {
            case 'D':
            if (doc != 'Y') { printf("Invalid Documents-Boarding Denied\n"); }
            else if (bag <= 25) { printf("Baggage weight is eligible\nYou may proceed\n"); }
            else { printf("Kindly Move to enhanced Baggage screening\n"); }
            break;

            case 'I':
            pr = 1; 
            if (doc != 'Y') { printf("Invalid Documents-Boarding Denied\n"); }
            else if (bag <= 35) { printf("Baggage weight is eligible\nYou may proceed\n"); }
            else { printf("Kindly Move to enhanced Baggage screening\n"); }
            break;
        }
        break;

        case 'C': // Senior Citizen
        pr = 1;
        switch(type)
        {
            case 'D':
            if (doc != 'Y') { printf("Invalid Documents-Boarding Denied\n"); }
            else if (bag <= 30) { printf("Baggage weight is eligible\nYou may proceed\n"); }
            else { printf("Kindly Move to enhanced Baggage screening\n"); }
            break;

            case 'I':
            if (doc != 'Y') { printf("Invalid Documents-Boarding Denied\n"); }
            else if (bag <= 40) { printf("Baggage weight is eligible\nYou may proceed\n"); }
            else { printf("Kindly Move to enhanced Baggage screening\n"); }
            break;
        }
        break;
        
        default:
        printf("Invalid Category!\n");
        return 0;
    }

    
    version = age % 5;
    switch(version)
    {
        case 0:
        printf("Verification Category: Category A\n");
        break;
        case 1:
        printf("Verification Category: Category B\n");
        break;
        case 2:
        printf("Verification Category: Category C\n");
        break;
        case 3:
        printf("Verification Category: Category D\n");
        break;
        case 4:
        printf("Verification Category: Category E\n");
        break;
    }

    
    if (pr == 1)
    {
        printf("Priority Assistance: Qualified\n");
    }
    else
    {
        printf("Priority Assistance: Not Qualified\n");
    }

    return 0;
}

