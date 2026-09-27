#include <stdio.h>

int main() 
{
    char Department;
    int Tmarks;
    int Pmarks;
    float attendence;
    int remainder;
 
    int min_T = 0, min_P = 0, min_A = 0;

    printf("Enter Department (C for CS, E for EE, B for BA, M for Maths): ");
    scanf(" %c", &Department); 
    printf("Enter Student's Theory Marks: ");
    scanf("%d", &Tmarks);
    printf("Enter Student's Practical Marks: ");
    scanf("%d", &Pmarks);
    printf("Enter Student's Attendance: ");
    scanf("%f", &attendence);

    switch(Department)
    {
        case 'C': 
            min_T = 50; min_P = 40; min_A = 75;
            break;

        case 'E':
            min_T = 55; min_P = 45; min_A = 75;
            break;

        case 'B':
            min_T = 50; min_P = 35; min_A = 80;
            break;

        case 'M':
            min_T = 60; min_P = 40; min_A = 75;
            break;

        default:
            printf("InValid Department \n Please Try Again");
            return 1;
    }
    
    int passed = (Tmarks >= min_T && Pmarks >= min_P && attendence >= min_A);
    int distinction = (Tmarks >= 85 && Pmarks >= 80 && attendence >= 90);

    remainder = Tmarks % 3;

    printf("---FINAL REPORT---\n");
    printf("Selected Department of the Student: %c\n", Department);
    printf("Theory Marks of the Student: %d\n", Tmarks);
    printf("Practical Marks of the Student: %d\n", Pmarks);
    printf("Attendence of the Student: %f\n", attendence);
    printf("Applicable Requirements: Theory >= %d, Practical >= %d, Attendance >= %d\n", min_T, min_P, min_A);
    
    printf("Distinction Eligibility: %s\n", distinction ? "Eligible for Distinction" : "Not Eligible for Distinction");

    switch(remainder)
    {
        case 0:
            printf("Seat Category A\n");
            break;
        case 1:
            printf("Seat Category B\n");
            break;
        case 2:
            printf("Seat Category C\n");
            break;
    }

    printf("Final Result of the student: %s\n", passed ? "Passed" : "Failed");

    return 0;
}
