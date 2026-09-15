#include <stdio.h>
int main()
{
    char category;
    char type;
    float bag;
    char doc;
    int lag;
    int version;
    int pr;



    printf("Domestic or International(I/D): ");
    scanf(" %c" , &type);
    printf("Select your Category: ");
    scanf(" %c" , &category);
    printf("Enter bag weight: ");
    scanf(" %f" , &bag);
    printf("Show Documents: ");
    scanf(" %c" , &doc);

    switch(type)
    {

        case 'D':
        switch (category)
        {
            if (bag<=20 && doc == 'Y')
            {
                lag = 1;
                printf("Baggage weight is eligible");
                printf("You may proceed");
            }
            else if (bag>20 && doc == 'Y')
            {
                printf("Kindly Move to enhanced Baggage screening");
            }
            else if (bag <=20 && doc != 'Y') 
            {
                printf("Invalid Documents-Boarding Denied");
            }
            break;
            case 'S':
            if (bag<=25 && doc == 'Y')
            {
                lag = 1 ;
                printf("Baggage weight is eligible");
                printf("You may proceed");
            }
            else if (bag>25 && doc == 'Y')
            {
                printf("Kindly Move to enhanced Baggage screening");
            }
            else if (bag <= 25 && doc != 'Y') 
            {
                printf("Invalid Documents-Boarding Denied");
            }
            break;
            case 'C':
            pr = 1;
            if (bag<=30 && doc == 'Y')
            {
                lag = 1 ;
                printf("Baggage weight is eligible");
                printf("You may proceed");
            }
            else if (bag>30 && doc == 'Y')
            {
                printf("Kindly Move to enhanced Baggage screening");
            }
            else if (bag <=30 && doc != 'Y') 
            {
                printf("Invalid Documents-Boarding Denied");
            }
            break;
            break;
        }

        case 'I':
        switch (category)
        {
            case 'A':
            if (bag<=30 && doc == 'Y')
            {
                lag = 1 ;
                printf("Baggage weight is eligible");
                printf("You may proceed");
            }
            else if (bag>30 && doc == 'Y')
            {
                printf("Kindly Move to enhanced Baggage screening");
            }
            else if (bag <=30 && doc != 'Y') 
            {
                printf("Invalid Documents-Boarding Denied");
            }
            break;
            case 'S':
            pr = 1;
            if (bag<=35 && doc == 'Y')
            {
                lag = 1 ;
                printf("Baggage weight is eligible");
                printf("You may proceed");
            }
            else if (bag>35 && doc == 'Y')
            {
                printf("Kindly Move to enhanced Baggage screening");
            }
            else if (bag <=35 && doc != 'Y') 
            {
                printf("Invalid Documents-Boarding Denied");
            }
            break;
            case 'C':
            pr = 1;
            if (bag<=40 && doc == 'Y')
            {
                lag = 1 ;
                printf("Baggage weight is eligible");
                printf("You may proceed");
            }
            else if (bag>40 && doc == 'Y')
            {
                printf("Kindly Move to enhanced Baggage screening");
            }
            else if (bag <= 40 && doc != 'Y') 
            {
                printf("Invalid Documents-Boarding Denied");
            }
            break;
            break;

        }

    }

    swtich(version)
    {

        case 0:
        printf("Category A");
        break;
        case 1:
        printf("Category B");
        break;
        case 2:
        printf("Category C");
        break;
        case 3:
        printf("Category D");
        break;
        case 4:
        printf("Category E");
        break;
        default:
        printf("Category Z");
        break;
    }

    if (asi == 1)
    {
        printf("Priority Given")
    }


    return 0;
}
