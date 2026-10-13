#include <stdio.h>

int main()
{
    float marks[10];
    float sum = 0, average = 0;
    int above_avg_count = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
        if (marks[i] < 0.0 || marks[i] > 20.0)
        {
            printf("Invalid Marks! Kindly Re-enter.\n");
            i--;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Student %d: %.2f / 20 - ", i + 1, marks[i]);
        if (marks[i] >= 18.0)
        {
            printf("Excellent\n");
        }
        else if (marks[i] >= 14.0)
        {
            printf("Good\n");
        }
        else if (marks[i] >= 10.0)
        {
            printf("Average\n");
        }
        else
        {
            printf("Needs Improvement\n");
        }
        sum += marks[i];
    }

    average = sum / 10.0;
    printf("\nClass Average: %.2f\n", average);

    for (int i = 0; i < 10; i++)
    {
        if (marks[i] > average)
        {
            above_avg_count++;
        }
    }
    printf("Students scoring above average: %d\n", above_avg_count);

    for (int i = 0; i < 10; i++)
    {
        marks[i] += 1.5;
        if (marks[i] > 20.0)
        {
            marks[i] = 20.0;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Student %d: %.2f / 20 - ", i + 1, marks[i]);
        if (marks[i] >= 18.0)
        {
            printf("Excellent\n");
        }
        else if (marks[i] >= 14.0)
        {
            printf("Good\n");
        }
        else if (marks[i] >= 10.0)
        {
            printf("Average\n");
        }
        else
        {
            printf("Needs Improvement\n");
        }
    }

    return 0;
}