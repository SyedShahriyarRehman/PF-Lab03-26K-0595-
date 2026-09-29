#include <stdio.h>

int main ()
{
    int light = 1;
    int heater = 2;
    int AC = 4;
    int camera = 8;
    
    int option;
    int active = 0; 

    while (1) 
    {
        printf("\nEnter resident's current panel value: ");
        scanf("%d", &active); 

        if (active == -1) 
        {
            break;
        }

        printf("Enter your option: ");
        scanf("%d", &option); 

        switch(option) 
        { 
            case 1: 
                active = active | heater; 
                break;
            case 2:
                active = active & ~AC; 
                break;
            case 3:
                active = active ^ light; 
                break;
            case 4:
                
                if ((active & camera) != 0) 
                {
                    printf("Security Camera is On\n");
                } 
                else 
                {
                    printf("Security Camera is Off\n");
                }
                break;
            default:
                printf("Invalid Option!\n");
                break;
        } 

        printf("New combined value: %d\n", active);

        if (((active & AC) != 0) && ((active & heater) != 0))
        {
            printf("Both are on, OVERLOAD RISK!\n");
        }
    }
    
    return 0;
}
