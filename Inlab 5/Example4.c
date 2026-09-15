#include <stdio.h>

int main() {
    int evidenceType, encrypted, sensitive, priority;
    float size;

    printf("Digital Forensics Evidence System\n");
    
    printf("1. Mobile Device\n");
    printf("2. Computer System\n");
    printf("3. Network Capture\n");
    printf("4. Cloud Account\n");
    scanf("%d", &evidenceType);

    printf("Enter evidence storage size (GB): ");
    scanf("%f", &size);

    printf("Is encryption detected? (1=Yes, 0=No): ");
    scanf("%d", &encrypted);

    printf("Does the evidence contain sensitive info? (1=Yes, 0=No): ");
    scanf("%d", &sensitive);

    printf("\nSelect Investigation Priority:\n");
    printf("1. Low\n");
    printf("2. Medium\n");
    printf("3. High\n");
    scanf("%d", &priority);

    switch(evidenceType) {
        case 1:
            printf("Mobile Device Evidence\n");
            if(encrypted == 1) {
                printf("Classification: Encrypted Mobile Evidence.\n");
                printf("Action: Specialized forensic extraction required.\n");
            } else {
                printf("Classification: Standard Mobile Evidence.\n");
                printf("Action: Standard forensic acquisition may proceed.\n");
            }
            break;

        case 2:
            printf("Computer System Evidence\n");
            if(size > 500 && encrypted == 1) {
                printf("Classification: Large Encrypted Storage.\n");
                printf("Priority: HIGH.\n");
            } else if(size > 500 || encrypted == 1) {
                printf("Classification: Requires Additional Analysis.\n");
            } else {
                printf("Classification: Standard Computer Evidence.\n");
            }
            break;

        case 3:
            printf("Network Capture Evidence\n");
            if((int)size % 2 == 0) {
                printf("Classification: Structured Network Capture.\n");
            } else {
                printf("Classification: Irregular Traffic Data.\n");
            }
            printf("Action: Packet-level analysis required.\n");
            break;

        case 4:
            printf("Cloud Account Evidence\n");
            if(sensitive == 1 && encrypted == 1) {
                printf("Classification: Sensitive Encrypted Cloud Evidence.\n");
                printf("Action: Verify legal authorization before acquisition.\n");
            } else if(sensitive == 1 || encrypted == 1) {
                printf("Classification: Requires Additional Authorization Review.\n");
            } else {
                printf("Classification: Standard Cloud Evidence.\n");
            }
            break;

        default:
            printf("Invalid evidence type selected.\n");
    }

    printf("\nInvestigation Priority: ");
    switch(priority) {
        case 1:  printf("LOW\n");     break;
        case 2:  printf("MEDIUM\n");  break;
        case 3:  printf("HIGH\n");    break;
        default: printf("INVALID\n"); break;
    }

    int priorityScore = (priority == 3) ? 100 : (priority == 2 ? 50 : 20);
    printf("Priority Score: %d\n", priorityScore);

    return 0;
}

