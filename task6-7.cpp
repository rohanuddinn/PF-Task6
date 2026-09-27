#include <stdio.h>

int main() {
    char account, transaction;

    printf("Enter account type (1 for Savings, 2 for Current): ");
    scanf(" %c", &account);

    switch (account) {
        case '1':
            printf("Enter transaction (1 for Deposit, 2 for Withdraw, 3 for Check Balance): ");
            scanf(" %c", &transaction);

            switch (transaction) {
                case '1':
                    printf("Deposit performed in Savings Account.");
                    break;

                case '2':
                    printf("Withdrawal performed from Savings Account.");
                    break;

                case '3':
                    printf("Checking balance of Savings Account.");
                    break;

                default:
                    printf("Invalid transaction.");
            }
            break;

        case '2':
            printf("Enter transaction (1 for Deposit, 2 for Withdraw, 3 for Check Balance): ");
            scanf(" %c", &transaction);

            switch (transaction) {
                case '1':
                    printf("Deposit performed in Current Account.");
                    break;

                case '2':
                    printf("Withdrawal performed from Current Account.");
                    break;

                case '3':
                    printf("Checking balance of Current Account.");
                    break;

                default:
                    printf("Invalid transaction.");
            }
            break;

        default:
            printf("Invalid account type.");
    }

    return 0;
}