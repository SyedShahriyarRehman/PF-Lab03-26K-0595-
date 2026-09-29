#include <stdio.h>
int main() 
{
    int pool = 1;
    int sauna = 2;
    int personal_trainer = 4;
    int access_24h = 8; 
    int membernum, chour;

    while (1) 
    {
        printf("Enter Member Access Number: ");
        scanf("%d", &membernum);

        if (membernum == 9999) 
		{
            printf("Shift completed.\n");
        }

        printf("Enter current hour(0-23): ");
        scanf("%d", &chour);

        int is_late_night = (chour >= 22 || chour < 6) ? printf("Late Night Mode") : ("Standard Mode") ;

        int allowed = is_late_night ? (membernum & access_24h) : (membernum & (pool | sauna | personal_trainer));

        printf("%s\n", allowed ? ">>> ACCESS GRANTED <<<" : ">>> ACCESS DENIED <<<");

        printf("%s", (membernum & personal_trainer) ? "Expect member on training floor." : "");
    }

    return 0;
}

