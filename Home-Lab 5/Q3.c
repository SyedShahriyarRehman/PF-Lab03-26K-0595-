#include <stdio.h>

int main() 
{
    int prod_cat;
    int cust_cat;
    float orig_amt;
    float dist;
    int order_num;

    float disc_pct = 0.0;
    float disc_amt;
    float final_pay;
    float deliv_chg = 0.0;
    float prior_chg = 0.0;
    float total_pay;
    int remainder;

    printf("Select Product Category:\n1. Electronics\n2. Clothing\n3. Books\n4. Household\nEnter choice (1-4): ");
    scanf("%d", &prod_cat);

    printf("Select Customer Category:\n1. Regular\n2. Premium\n3. Corporate\nEnter choice (1-3): ");
    scanf("%d", &cust_cat);

    printf("Enter Original Amount: ");
    scanf("%f", &orig_amt);

    printf("Enter Distance (km): ");
    scanf("%f", &dist);

    printf("Enter Order Number: ");
    scanf("%d", &order_num);

    switch(prod_cat)
    {
        case 1: 
            switch(cust_cat)
            {
                case 1: disc_pct = 5.0; break;
                case 2: disc_pct = 10.0; break;
                case 3: disc_pct = 15.0; break;
            }
            break;

        case 2: 
            switch(cust_cat)
            {
                case 1: disc_pct = 10.0; break;
                case 2: disc_pct = 15.0; break;
                case 3: disc_pct = 20.0; break;
            }
            break;

        case 3: 
            switch(cust_cat)
            {
                case 1: disc_pct = 8.0; break;
                case 2: disc_pct = 12.0; break;
                case 3: disc_pct = 18.0; break;
            }
            break;

        case 4: 
            switch(cust_cat)
            {
                case 1: disc_pct = 7.0; break;
                case 2: disc_pct = 14.0; break;
                case 3: disc_pct = 20.0; break;
            }
            break;

        default:
            printf("Invalid Category Selected.\n");
            break;
    }

    disc_amt = orig_amt * (disc_pct / 100.0);
    final_pay = orig_amt - disc_amt;
    int free_ship = (final_pay >= 5000.0) || (cust_cat == 2 || cust_cat == 3);
    deliv_chg = free_ship ? 0.0 : (dist * 15.0);
    int prior_eligible = (cust_cat == 2 || cust_cat == 3) && (orig_amt >= 10000.0);
    prior_chg = prior_eligible ? 500.0 : 0.0;
    total_pay = final_pay + deliv_chg + prior_chg;
    remainder = order_num % 4;

    printf("\n--- FINAL REPORT ---\n");
    printf("Original Amount: Rs. %.2f\n", orig_amt);
    printf("Discount Percentage: %f%%\n", disc_pct);
    printf("Discount Amount: Rs. %.2f\n", disc_amt);
    printf("Final Payable: Rs. %.2f\n", final_pay);
    printf("Delivery Charge: Rs. %.2f\n", deliv_chg);
    printf("Priority Charge: Rs. %.2f\n", prior_chg);
    printf("Total Payable: Rs. %.2f\n", total_pay);
    printf("Processing Group Code: %d\n", remainder);

    return 0;
}

