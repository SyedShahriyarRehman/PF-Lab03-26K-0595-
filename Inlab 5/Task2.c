#include <stdio.h>

int main () 
{
    int age, rate, consciouslevel, severitylevel, remainder;
    float temp; 
    char Emergencydep;  
    
    int dept_priority = 0, is_critical = 0, is_temp_alert = 0, is_senior = 0;
    int cardiac_urg = 0, neuro_urg = 0, trauma_urg = 0;
  
    printf("Patient's Emergency Department:\nCardiology(C),Neurology(N),Trauma(T),General Emergency(G)\n ");
    scanf(" %c" , &Emerygencydep);
    printf("Patient's Age:\n ");
    scanf("%d" , &age);
    printf("Heart Rate of Patient:\n ");
    scanf("%d" , &rate);
    printf("Body Temperature of the Patient:\n ");
    scanf("%f" , &temp);
    printf("Consciousness Level:\n ");
    scanf(" %c" , &consciouslevel);
    printf("Severity Level:\n ");
    scanf(" %c" , &Emergencydep);
    
    if (rate < 50 || rate > 120) { cardiac_urg = 1; }
    if (consciouslevel == 0)     { neuro_urg = 1; }
    if (severitylevel >= 4)      { trauma_urg = 1; }
	
 
    switch (Emergencydep)
    {
        case 'C': case 'c':
            switch (cardiac_urg) {
                case 1: printf("Immediate cardiac attention required\n"); dept_priority = 1; break;
                case 0: printf("Cardiac status: Normal\n"); break;
            }
            break;
        case 'N': case 'n':
            switch (neuro_urg) {
                case 1: printf("Urgent neurological attention required\n"); dept_priority = 1; break;
                case 0: printf("Neurological status: Stable\n"); break;
            }
            break;
        case 'T': case 't':
            switch (trauma_urg) {
                case 1: printf("High-priority trauma case\n"); dept_priority = 1; break;
                case 0: printf("Standard trauma case\n"); break;
            }
            break;
        case 'G': case 'g':
            printf("General Emergency Assessment\n");
            break;
        default:
            printf("Invalid Department!\n");
            break;
    }
    

    if ((rate < 50 || rate > 120) && consciouslevel == 0) {
        is_critical = 1;
        printf("Alert: Patient is in CRITICAL CONDITION!\n");
    }
    if (temp < 36.0 || temp > 38.0) {
        is_temp_alert = 1;
        printf("Alert: Abnormal body temperature detected!\n");
    }
    if (age >= 65) {
        is_senior = 1;
        printf("Status: Senior-priority consideration applied.\n");
    }

    remainder = (age + rate) % 4; 
    switch(remainder)
    {
    	case 0:
    		printf("Category A\n");
    		break;
    	case 1:
    		printf("Category B\n");
    		break;
		case 2:
    		printf("Category C\n");
    		break;
		case 3:
    		printf("Category D\n");
    		break;
		
	}
    
   
    if (is_critical == 1) {
        printf("Decision: SENT FOR IMMEDIATE MEDICAL ATTENTION\n");
    }
    else if (dept_priority == 1 || is_senior == 1 || is_temp_alert == 1) {
        printf("Decision: ASSIGNED TO APPROPRIATE PRIORITY LEVEL FOR FURTHER ASSESSMENT\n");
    }
    else {
        printf("Decision: ASSIGNED TO ROUTINE MEDICAL ASSESSMENT\n");
    }

    return 0;
}

