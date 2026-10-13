#include <stdio.h>

int main ()
{
    int temp[] = {31, 33, 35, 34, 38, 36, 32};
    int num = sizeof(temp)/sizeof(temp[0]);  
    int largest = temp[0], smallest = temp[0], sum = 0;
    float avg = 0;

    for(int i = 0; i < num; i++)
    {
        printf("Day %d: %d C\n", i + 1, temp[i]);
    }

    for(int i = 0; i < num; i++)
    {
        if (largest < temp[i])
        {
            largest = temp[i];
        }
        if (smallest > temp[i])
        {
            smallest = temp[i];
        }
        sum += temp[i];
    }

    avg = (float)sum / num;
    printf("Largest Value is: %d\n", largest);
    printf("Smallest Value is: %d\n", smallest);
    printf("Avg Value is: %.2f\n\n", avg);

    temp[2] = 37;
    sum = 0;

    for(int i = 0; i < num; i++)
    {
        printf("Day %d: %d C\n", i + 1, temp[i]);
    }

    for(int i = 0; i < num; i++)
    {
        if (largest < temp[i])
        {
            largest = temp[i];
        }
        if (smallest > temp[i])
        {
            smallest = temp[i];
        }
        sum += temp[i];
    }

    avg = (float)sum / num;
    printf("Largest Value is: %d\n", largest);
    printf("Smallest Value is: %d\n", smallest);
    printf("Avg Value is: %.2f\n\n", avg);

    for(int i = 0; i < num; i++)
    {
        printf("Address of temp[%d]: %p\n", i, (void*)&temp[i]);
    }

    return 0;
}

