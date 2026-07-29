// ATM Withdrawal (Nested + Condition)
// Balance = 5000
// Withdraw only if:
// amount ≤ balance
// amount % 100 == 0

#include<stdio.h>
void main(){
    int balance,amount;
    printf("Enter Balance: ");
    scanf("%d",&balance);
    printf("Available Balance: %d\n", balance);
    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (amount <= balance) {
        if (amount % 100 == 0) {
            balance-=amount;
            printf("Transaction Successful!\n");
            printf("Withdrawn %d...\n", amount);
            printf("Remaining Balance: %d\n", balance);
        } else {
            printf("Transaction Failed: Amount must be a multiple of 100.\n");
        }
    } else {
        printf("Transaction Failed: Insufficient balance.\n");
    }
}