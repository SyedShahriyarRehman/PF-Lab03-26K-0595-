#include <stdio.h>

int main() {
    int system, severity;
    int mileage;
    int warranty;
    int serviceCode;

    printf("Smart Vehicle Diagnostic System\n");
    
    printf("1. Engine\n");
    printf("2. Transmission\n");
    printf("3. Braking System\n");
    printf("4. Electrical System\n");
    scanf("%d", &system);

    printf("\nEnter Diagnostic Severity:\n");
    printf("1. Minor\n");
    printf("2. Moderate\n");
    printf("3. Critical\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &severity);

    printf("Enter vehicle mileage (km): ");
    scanf("%d", &mileage);

    printf("Is the vehicle currently under warranty? (1=Yes, 0=No): ");
    scanf("%d", &warranty);

    serviceCode = (mileage % 100) + severity;
    printf("\nGenerated Service Code: %d\n", serviceCode);

    if(severity == 3 || mileage > 200000) {
        printf("Priority Level: High\n");
    } else {
        printf("Priority Level: Normal\n");
    }

    switch(system) {
        case 1:
            printf("\n[ Engine Diagnostics ]\n");
            switch(severity) {
                case 1: printf("Action: Schedule engine inspection.\n"); break;
                case 2: printf("Action: Perform engine maintenance.\n"); break;
                case 3: printf("Action: Immediate engine shutdown required.\n"); break;
                default: printf("Invalid severity rating.\n");
            }
            break;

        case 2:
            printf("\n[ Transmission Diagnostics ]\n");
            switch(severity) {
                case 1: printf("Action: Monitor transmission performance.\n"); break;
                case 2: printf("Action: Service required within 24 hours.\n"); break; // Fixed text artifact here
                case 3: printf("Action: Vehicle towing required.\n"); break;
                default: printf("Invalid severity rating.\n");
            }
            break;

        case 3:
            printf("\n[ Braking System Diagnostics ]\n");
            switch(severity) {
                case 1: printf("Action: Immediate brake inspection required.\n"); break;
                case 2: printf("Action: Avoid long-distance driving.\n"); break;
                case 3: printf("Action: Vehicle operation prohibited.\n"); break;
                default: printf("Invalid severity rating.\n");
            }
            break;

        case 4:
            printf("\n[ Electrical System Diagnostics ]\n");
            switch(severity){
                case 1: printf("Action: Issue may be temporarily ignored.\n"); break;
                case 2: printf("Action: Battery and wiring diagnostics required.\n"); break;
                case 3: printf("Action: Complete electrical isolation required.\n"); break;
                default: printf("Invalid severity rating.\n");
            }
            break;

        default:
            printf("Invalid subsystem selection.\n");
    }

    if(warranty == 1) {
        printf("\nWarranty Status: Eligible for warranty evaluation.\n");
    } else {
        printf("\nWarranty Status: Customer-paid service.\n");
    }

    return 0;
}

