#include <stdio.h>

int main() {
    int accountType, transaction;
    float balance, amount;

    printf("Welcome to the Smart Banking Terminal\n");
    
    printf("\nSelect your Account Type:\n");
    printf("1. Savings Account\nOR\n");
    printf("2. Current Account\nOR\n");
    printf("3. Student Account\n");
    scanf("%d", &accountType);

    printf("Enter your current balance: ");
    scanf("%f", &balance);

    printf("\nSelect a Transaction:\n");
    printf("1. Deposit\n");
    printf("2. Withdrawal\n");
    printf("3. Balance Inquiry\n");
    scanf("%d", &transaction);

    switch(accountType) {
        case 1:
            printf("Savings Account\n");
            switch(transaction) {
                case 1:
                    printf("Enter deposit amount: ");
                    scanf("%f", &amount);
                    if(amount > 0) {
                        balance += amount;
                        printf("Deposit successful.\n");
                        printf("Updated Balance: %.2f\n", balance);
                    } else {
                        printf("Invalid deposit amount.\n");
                    }
                    break;
                case 2:
                    printf("Enter withdrawal amount: ");
                    scanf("%f", &amount);
                    if(amount > 0 && amount <= balance) {
                        balance -= amount;
                        printf("Withdrawal successful.\n");
                        printf("Remaining Balance: %.2f\n", balance);
                    } else {
                        printf("Insufficient balance or invalid amount.\n");
                    }
                    break;
                case 3:
                    printf("Current Balance: %.2f\n", balance);
                    break;
                default:
                    printf("Invalid transaction choice.\n");
            }
            break;

        case 2:
            printf("Current Account\n");
            switch(transaction) {
                case 1:
                    printf("Enter deposit amount: ");
                    scanf("%f", &amount);
                    if(amount > 0) {
                        balance += amount;
                        printf("Deposit successful.\n");
                        printf("Updated Balance: %.2f\n", balance);
                    } else {
                        printf("Invalid deposit amount.\n");
                    }
                    break;
                case 2:
                    printf("Enter withdrawal amount: ");
                    scanf("%f", &amount);
                    if(amount > 0 && amount <= balance + 50000) {
                        balance -= amount;
                        printf("Withdrawal approved.\n");
                        printf("Remaining Balance: %.2f\n", balance);
                    } else {
                        printf("Withdrawal exceeds your overdraft limit.\n");
                    }
                    break;
                case 3:
                    printf("Current Balance: %.2f\n", balance);
                    break;
                default:
                    printf("Invalid transaction choice.\n");
            }
            break;

        case 3:
            printf("Student Account\n");
            switch(transaction) {
                case 1:
                    printf("Enter deposit amount: ");
                    scanf("%f", &amount);
                    if(amount > 0) {
                        balance += amount;
                        printf("Deposit successful.\n");
                        printf("Updated Balance: %.2f\n", balance);
                    } else {
                        printf("Invalid deposit amount.\n");
                    }
                    break;
                case 2:
                    printf("Enter withdrawal amount: ");
                    scanf("%f", &amount);
                    if(amount > 0 && balance - amount >= 2000) {
                        balance -= (amount + 50);
                        printf("Withdrawal approved. A Rs. 50 service charge was applied.\n");
                        printf("Remaining Balance: %.2f\n", balance);
                    } else {
                        printf("Withdrawal denied. Minimum balance requirement not satisfied.\n");
                    }
                    break;
                case 3:
                    printf("Current Balance: %.2f\n", balance);
                    break;
                default:
                    printf("Invalid transaction choice.\n");
            }
            break;

        default:
            printf("Invalid account type selected.\n");
    }

    return 0;
}

