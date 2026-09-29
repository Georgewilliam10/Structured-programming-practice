#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice = 0;
    double balance = 1000.00;
    double amount;

    while (choice != 4) {
        printf("\n--- Simple ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Funds\n");
        printf("3. Withdraw Funds\n");
        printf("4. Exit\n");
        printf("Enter choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current balance: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited $%.2f\n", amount);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%lf", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Successfully withdrew $%.2f\n", amount);
                } else {
                    printf("Insufficient funds or invalid amount.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid selection. Please enter a option between 1 and 4.\n");
        }
    }

    return 0;
}
